`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:40 10/07/2013 
// Design Name: 
// Module Name:    pro1_7seg 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pro1_7seg(
    input clk,
    input rst,
	 input [15:0]  show,
    output reg [6:0] seg ,
    output reg [3:0] an
    );
//number encoding
parameter [6:0] dig0 = 7'b1000000;
parameter [6:0] dig1 = 7'b1111001;
parameter [6:0] dig2 = 7'b0100100;
parameter [6:0] dig3 = 7'b0110000;
parameter [6:0] dig4 = 7'b0011001;
parameter [6:0] dig5 = 7'b0010010;
parameter [6:0] dig6 = 7'b0000010;
parameter [6:0] dig7 = 7'b1111000;
parameter [6:0] dig8 = 7'b0000000;
parameter [6:0] dig9 = 7'b0010000;
parameter [6:0] diga = 7'b0001000;
parameter [6:0] digb = 7'b0000011;
parameter [6:0] digc = 7'b1000110;
parameter [6:0] digd = 7'b0100001;
parameter [6:0] dige = 7'b0000110;
parameter [6:0] digf = 7'b0001110;
parameter [6:0] dignone = 7'b1111111;

reg[6:0] segtemp;
reg[3:0] antemp;
wire [3:0] seg0,seg1,seg2,seg3;
reg[16:0] cnt = 0;

assign seg0 = show[15:12];
assign seg1 = show[11:8];
assign seg2 = show[7:4];
assign seg3 = show[3:0];

//changing different digital segments 1.25kHz
always@(posedge clk)
begin
	if(rst)
	begin
		antemp<=4'b1111;
		cnt<=0;
	end
	else
	begin
		if(cnt==10000)
		begin
			antemp<=4'b0111;
			cnt<=cnt+1;
		end
		else if(cnt==20000)
		begin
			antemp<=4'b1011;
			cnt<=cnt+1;
		end
		else if(cnt==30000)
		begin
			antemp<=4'b1101;
			cnt<=cnt+1;
		end
		else if(cnt==40000)
		begin
			antemp<=4'b1110;
			cnt<=0;
		end
		else cnt<=cnt+1;
	
	end
end

//decoding digits from show
always@(posedge clk)
begin
	if(rst) segtemp<=dignone;
	else
	begin
	case(antemp)
			4'b0111: case(seg0)
							0:	segtemp<=dig0;
							1:	segtemp<=dig1;
							2:	segtemp<=dig2;
							3:	segtemp<=dig3;
							4:	segtemp<=dig4;
							5:	segtemp<=dig5;
							6:	segtemp<=dig6;
							7:	segtemp<=dig7;
							8:	segtemp<=dig8;
							9:	segtemp<=dig9;
							10: segtemp<=diga;
							11: segtemp<=digb;
							12: segtemp<=digc;
							13: segtemp<=digd;
							14: segtemp<=dige;
							15: segtemp<=digf;
							default: segtemp<=dignone;
						endcase
			4'b1011: case(seg1)
							0:	segtemp<=dig0;
							1:	segtemp<=dig1;
							2:	segtemp<=dig2;
							3:	segtemp<=dig3;
							4:	segtemp<=dig4;
							5:	segtemp<=dig5;
							6:	segtemp<=dig6;
							7:	segtemp<=dig7;
							8:	segtemp<=dig8;
							9:	segtemp<=dig9;
							10: segtemp<=diga;
							11: segtemp<=digb;
							12: segtemp<=digc;
							13: segtemp<=digd;
							14: segtemp<=dige;
							15: segtemp<=digf;
							default: segtemp<=dignone;
						endcase
			4'b1101: case(seg2)
							0:	segtemp<=dig0;
							1:	segtemp<=dig1;
							2:	segtemp<=dig2;
							3:	segtemp<=dig3;
							4:	segtemp<=dig4;
							5:	segtemp<=dig5;
							6:	segtemp<=dig6;
							7:	segtemp<=dig7;
							8:	segtemp<=dig8;
							9:	segtemp<=dig9;
							10: segtemp<=diga;
							11: segtemp<=digb;
							12: segtemp<=digc;
							13: segtemp<=digd;
							14: segtemp<=dige;
							15: segtemp<=digf;
							default: segtemp<=dignone;
						endcase
			4'b1110: case(seg3)
							0:	segtemp<=dig0;
							1:	segtemp<=dig1;
							2:	segtemp<=dig2;
							3:	segtemp<=dig3;
							4:	segtemp<=dig4;
							5:	segtemp<=dig5;
							6:	segtemp<=dig6;
							7:	segtemp<=dig7;
							8:	segtemp<=dig8;
							9:	segtemp<=dig9;
							10: segtemp<=diga;
							11: segtemp<=digb;
							12: segtemp<=digc;
							13: segtemp<=digd;
							14: segtemp<=dige;
							15: segtemp<=digf;
							default: segtemp<=dignone;
						endcase
			default: segtemp<=dignone;
		endcase
		end
end

always@(*)
begin
	seg=segtemp;
	an=antemp;
end
endmodule
