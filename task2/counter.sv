module counter #(
    parameter WIDTH = 8
)(
    //interface signals 
    input logic     clk,    //clk
    input logic     rst,    //reset 
    input logic     en,     //counter enable 
    output logic [WIDTH-1:0] count     /*count output [(WIDTH-1):0] creates a 8 bit output 7:0*/
);

always_ff @ (posedge clk)
    if (rst) count <= {WIDTH{1'b0}}; //this converts the 1 bit 0 to an 7 bit zero matching the WIDTH
    else if (en) count <= count + {{WIDTH-1{1'b0}}, en};
    else count <= count + {WIDTH-1{1'b1}};

endmodule

