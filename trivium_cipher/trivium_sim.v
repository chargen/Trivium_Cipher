`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:42:13 12/02/2013
// Design Name:   trivium_cipher
// Module Name:   C:/Users/ljtale/ISE_Projects/ELEC427/Project3/trivium_cipher/trivium_sim.v
// Project Name:  trivium_cipher
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trivium_cipher
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module trivium_sim;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [6:0] seg;
	wire [3:0] an;

	// Instantiate the Unit Under Test (UUT)
	trivium_cipher uut (
		.clk(clk), 
		.rst(rst), 
		.seg(seg), 
		.an(an)
	);
	parameter key = 80'h9052aed66ce184be2329;
	//const uint8 key[10] = {0x29,0x23,0xbe,0x84,0xe1,0x6c,0xd6,0xae,0x52,0x90};
	parameter nonce = 80'h8cd13ffec22c8386202d;
	//const uint8 nonce[10] = {0x2d,0x20,0x86,0x83,0x2c,0xc2,0xfe,0x3f,0xd1,0x8c};
	
	parameter s0 = 4'b0000;
	parameter s1 = 4'b0001;
	parameter s2 = 4'b0010;
	parameter s3 = 4'b0011;
	parameter s4 = 4'b0100;
	parameter s5 = 4'b0101;
	parameter s6 = 4'b0110;
	parameter s7 = 4'b0111;
	parameter s8 = 4'b1000;
	
	reg[3:0] state;
	reg[3:0] nextstate;
	
	reg [92:0]	Ra;
	reg [83:0]	Rb;
	reg [110:0]	Rc;
	reg [7:0] key_byte;
	reg key_stream;
	reg [10:0] warm_count;
	reg [4:0] byte_count;
	reg out_a;
	reg out_b;
	reg out_c;
	
	reg [15:0] error;
	
	reg [15:0] show_t;
	reg [9:0] addr_plain_t;
	reg [9:0] addr_cipher_t;
	reg [7:0] encrypt_byte;
	
	wire [15:0] show;
	wire [9:0] addr_plain;
	wire [9:0] addr_cipher;
	wire [7:0] dout_plain;
	wire [7:0] dout_cipher;
	
	assign show = show_t;
	assign addr_plain = addr_plain_t;
	assign addr_cipher = addr_cipher_t;

	pro1_7seg seven_seg1(
		 .clk(clk),
		 .rst(rst),
		 .show(show),
		 .seg(seg) ,
		 .an(an)
	);
	plain  plain_text1(
	  .clka(clk), // input clka
	  .addra(addr_plain), // input [9 : 0] addra
	  .douta(dout_plain) // output [7 : 0] douta
	);

	cipher cipher_text1(
	  .clka(clk), // input clka
	  .addra(addr_cipher), // input [9 : 0] addra
	  .douta(dout_cipher) // output [7 : 0] douta
	);
	always@(posedge clk)
		if(rst)
			begin
				Ra <= 0;
				Rb <= 0;
				Rc <= 0;
				addr_plain_t <= 0;
				addr_cipher_t <= 0;
				key_byte <= 0;
				key_stream <= 0;
				warm_count <= 0;
				byte_count <= 0;
				nextstate <= s0;
				out_a <= 0;
				out_b <= 0;
				out_c <= 0;
				error <= 0;
				encrypt_byte <= 0;
			end
		else
			begin
				case(state)
					s0:/*stand by state, go to s1*/
						nextstate <= s1;
					s1:/*load the initial values to the three registers*/
						begin
							Ra[79:0] <= nonce;
							Rb[79:0] <= key;
							Rc[110:108] <= 3'b111;
							nextstate <= s2;
						end
					s2:/*if warm_count is less than 1152, then it's warm-up phase
						otherwise it's encryption phase, we will take one byte from plain
						text after one key stream byte is obtained.
						first shift the three registers, take the output to feed back the input*/
						begin
							Ra <= {Ra[91:0],1'b0};
							Rb	<= {Rb[82:0],1'b0};
							Rc <= {Rc[109:0],1'b0};
							nextstate <= s7;
						end
					s7:
						begin
							out_a <= (Ra[65] ^ Ra[92]) ^ (Ra[90] & Ra[91]);
							out_b <= (Rb[68] ^ Rb[83]) ^ (Rb[81] & Rb[82]);
							out_c <= (Rc[65] ^ Rc[110]) ^ (Rc[108] & Rc[109]);
							nextstate <= s8;
						end
					s8:
						begin
							key_stream <= out_a ^ out_b ^ out_c;
							Ra[0] <= out_c ^ Ra[68];
							Rb[0]	<= Rb[77] ^ out_a;
							Rc[0] <= Rc[86] ^ out_b;
							if(warm_count >= 1152)// encryption phase
								nextstate <= s3;
							else
								begin
									warm_count <= warm_count + 1;
									nextstate <= s2;
								end
						end
					s3:/*get the output and store 8 bits into one byte*/
						begin
							if(byte_count >= 7)
								begin
									key_byte[byte_count] <= key_stream;
									byte_count <= 0;
									nextstate <= s4;
								end
							else
								begin
									key_byte[byte_count] <= key_stream;
									byte_count <= byte_count + 1;
									nextstate <= s2;
								end
						end
					s4:	/* take one byte from plain text and encrypt it using key_byte*/
						begin
							if(addr_plain_t >= 1023)// at the end of the plain text
								begin
									nextstate <= s6;
									addr_plain_t <= 0;
									addr_cipher_t <= 0;
								end
							else
								begin
									encrypt_byte <= key_byte ^ dout_plain;
									nextstate <= s5;
								end
						end
					s5:/* change the addresses of plain text and cipher text ROMs*/
						begin
							error <= error + encrypt_byte ^ dout_cipher;
							addr_plain_t <= addr_plain_t + 1;
							addr_cipher_t <= addr_cipher_t + 1;
							nextstate <= s2;
						end
					s6: /* finish state*/
						nextstate <= s6;
					default:
						nextstate <= s0;
				endcase
			end
	always@(posedge clk)
		begin
		if(rst)
			begin
				show_t <= 0;
			end
		else
			begin
				show_t <= error;
			end
		end
		
	always@(*)
		begin
			state = nextstate;
		end

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;

		// Wait 10 ns for global reset to finish
		#100;
		rst = 0;
        
		// Add stimulus here
	end
	always
		begin
			#10 clk = !clk;
		end
      
endmodule

