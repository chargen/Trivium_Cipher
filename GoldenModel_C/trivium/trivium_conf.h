#include "stdio.h"
#include "stdlib.h"
#include "math.h"

typedef unsigned char uint8;

static uint8 Ra[12];  // Register A, only the front 93 bits are available, the last 3 bits are blank whose default values are 0

static uint8 Rb[11];	 // Register B, only the front 84 bits are available, the last 4 bits are blank whose default values are 0

static uint8 Rc[14];	 // Register C, only the front 111 bits are available, the last 1 bit is blank whose default value is 0

/*When dealing with the three registers, only one bit is taken every operation, the method to take one bit from
an uint8 type of R is (R >> n)&(uint8)1, n is the (n+1)th bit counting from the LSB */

const uint8 key[10] = {0x29,0x23,0xbe,0x84,0xe1,0x6c,0xd6,0xae,0x52,0x90};	
// key should be kept secret originally, but here it's just kept constant	
	
const uint8 nonce[10] = {0x2d,0x20,0x86,0x83,0x2c,0xc2,0xfe,0x3f,0xd1,0x8c};	
// nonce should be changed every time it's used, for convenience of verilog comparison here it's kept constant


void key_nonce_generate();	
// use this function to randomly generate key and nonce for further use, it's only used once in main function then commented

/*trivium_8bit() achieve the basic Trivium cipher functionality, it returns one byte key stream after each call.
for warm-up phase, this function should be called 1152/8 = 144 times, for encryption phase the returned bytes can
encrypt 8 bits plain text*/
uint8 trivium_8bit();

/*trivium_1bit() achieve the basic Trivium cipher functionality, it returns only one bit of the key stream after each call
the return data type is uint8 but only the LSB is valide. */
uint8 trivium_1bit();
