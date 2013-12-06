#include "trivium_conf.h"

void key_nonce_generate(){
	unsigned int rand_seed = 1;
	uint8 key[10];
	uint8 nonce[10];
	srand(rand_seed++);
	for(short i=0;i<10;i++){
		key[i]=(uint8)floor((float)(rand()%256));
		printf("%x \n",key[i]);
	}
	srand(rand_seed++);

	for(short i=0;i<10;i++){
		nonce[i]=(uint8)floor((float)(rand()%256));
		printf("%x \n",nonce[i]);
	}
}

/*plain text is generated and written to a txt file, one byte is read out every time it's supposed to be used*/
void plain_generate(){
	FILE *f1,*f2;
	srand(10);
	uint8 *plain;
	plain = (uint8*)malloc(sizeof(uint8));
	f1=fopen("plain.txt","w+");
	for(int i=0;i<1022;i++){
		fprintf(f1,"%x\n",(uint8)floor((float)(rand()%256)));
	}
	fprintf(f1,"%x",(uint8)floor((float)(rand()%256)));
	fclose(f1);
	f2 = fopen("plain.txt","r+");
	while(feof(f2)==0){
		fscanf(f2,"%x",&plain);
		printf("%d\n",plain);
	}
	fclose(f2);
}
uint8 trivium_1bit(){
	uint8 one_bit = 0;
	uint8 temp1, temp2;
	uint8 and_temp1, and_temp2;
	uint8 xor_temp1, xor_temp2,xor_temp3;
	uint8 out_a,out_b,out_c;
	/*First shift registers A B and C by one bit to the MSB.
	For each register begin from the right most bytes*/
	for(short i=11;i>0;i--){
		Ra[i] = Ra[i] << 1;
		temp1 = Ra[i-1];
		temp1 = temp1 & 0x80;
		temp1 = temp1 >> 7;
		Ra[i] = Ra[i] | temp1;
	}
	Ra[0] = Ra[0] << 1;

	for(short i=10;i>0;i--){
		Rb[i] = Rb[i] << 1;
		temp1 = Rb[i-1];
		temp1 = temp1 & 0x80;
		temp1 = temp1 >> 7;
		Rb[i] = Rb[i] | temp1;
	}
	Rb[0] = Rb[0] << 1;

	for(short i=13;i>0;i--){
		Rc[i] = Rc[i] << 1;
		temp1 = Rc[i-1];
		temp1 = temp1 & 0x80;
		temp1 = temp1 >> 7;
		Rc[i] = Rc[i] | temp1;
	}
	Rc[0] = Rc[0] << 1;

	/*Second operate the output of each register*/
	/*Register A*/
	and_temp1 = (Ra[11] >> 2) & 0x01;	// the 91th bit
	and_temp2 = (Ra[11] >> 3) & 0x01;	// the 92th bit
	xor_temp1 = and_temp1 & and_temp2;
	xor_temp2 = (Ra[8] >> 1) & 0x01;	// the 66th bit
	xor_temp3 = (Ra[11] >> 4) & 0x01;	// the 93th bit
	out_a = (xor_temp1 ^ xor_temp2 ^ xor_temp3) & 0x01;
	/*Register B*/
	and_temp1 = (Rb[10] >> 1) & 0x01;	// the 82th bit
	and_temp2 = (Rb[10] >> 2) & 0x01;	// the 83th bit
	xor_temp1 = and_temp1 & and_temp2;
	xor_temp2 = (Rb[8] >> 4) & 0x01;	// the 69th bit
	xor_temp3 = (Rb[10] >> 3) & 0x01;	// the 84th bit
	out_b = (xor_temp1 ^ xor_temp2 ^ xor_temp3) & 0x01;
	/*Register C*/
	and_temp1 = (Rc[13] >> 4) & 0x01;	// the 109th bit
	and_temp2 = (Rc[13] >> 5) & 0x01;	// the 110th bit
	xor_temp1 = and_temp1 & and_temp2;
	xor_temp2 = (Rc[8] >> 1) & 0x01;	// the 66th bit
	xor_temp3 = (Rc[13] >> 6) & 0x01;	// the 111th bit
	out_c = (xor_temp1 ^ xor_temp2 ^ xor_temp3) & 0x01;


	/*Third operate the input of each register*/
	/*Register A*/
	xor_temp1 = (Ra[8] >> 4) & 0x01;	// the 69th bit
	Ra[0] = Ra[0] | (xor_temp1 ^ out_c);
	/*Register B*/
	xor_temp1 = (Rb[9] >> 5) & 0x01;	// the 78th bit
	Rb[0] = Rb[0] | (xor_temp1 ^ out_a);
	/*Register C*/
	xor_temp1 = (Rc[10] >> 6) & 0x01;	// the 87th bit
	Rc[0] =Rc[0] | (xor_temp1 ^ out_b);
	/*Fourth output the key stream bit*/
	one_bit = out_a ^ out_b ^ out_c;
//	printf("\n%x",Ra[0]);
	return one_bit;
}

uint8 trivium_8bit(){
	uint8 one_byte = 0;
	uint8 one_bit = 0;
	for(short i=0;i<8;i++){
		one_bit = trivium_1bit();
		one_byte = one_byte | (one_bit << i);
	}
	return one_byte;
}
int main(){
//	key_nonce_generate();
//	plain_generate();
	uint8 one_byte;
	/*pre-load the initial value of registers*/
	for(short i=0;i<10;i++){
		Ra[i] = nonce[i];		// load IV to register A
		Rb[i] = key[i];			// load key to register B
	}
	Rc[13] = Rc[13] | 0x70;	// c109 c110 c11 are set to 1
	for(short i=10;i>=0;i--)
				printf("%x",Rb[i]);
	printf("\n");
	/*warm-up phase*/
	for(short i=0;i<1152;i++){
		one_byte = trivium_1bit();
	}

	FILE *plain,*cipher,*keystream;
	uint8 *ptxt,ctxt;
	ptxt =(uint8*) malloc(sizeof(uint8));
	plain = fopen("plain.txt","r+");
	cipher = fopen("cipher.txt","w+");
	keystream = fopen("keystream.txt","w+");
	//when the pointer doesn't come to the end of the plain.txt file
	while(feof(plain)==0){
		fscanf(plain,"%x",ptxt);
		one_byte = trivium_8bit();
		ctxt = one_byte ^ *ptxt;
		fprintf(cipher,"%x\n",ctxt);
		fprintf(keystream,"%x\n",one_byte);
	}
	fclose(plain);
	fclose(cipher);
	fclose(keystream);
	system("pause");
	return 0;
}