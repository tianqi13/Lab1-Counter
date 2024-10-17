#include "Vtop.h" //change
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vtop* top = new Vtop; //change

    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("top.vcd"); //change

    //init Vbuddy 
    if(vbdOpen() !=1) return(-1);
    vbdHeader("Lab 1: Counter");

    //initialise simulation inputs
    top->clk = 1;
    top->rst = 1;

    //run simulation for many clock cycles 
    for (i=0; i<10000; i++){

        for(clk = 0; clk < 2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        //++++ Send count value to Vbuddy
        //vbdHex(4, (int(top->bcd) >> 16) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, int(top->bcd) &0xF);
        //---- end of Vbuddy output section

        //vbdPlot(int(top->count), 0, 255);

        top->rst = (i < 2) | (i == 15);
        top->en = vbdFlag();

        //set the preloaded value to be the input from vbuddy
        //top->v = vbdValue();

        if(Verilated::gotFinish()) exit(0);
    }   
    
    vbdClose();
    tfp->close();
    exit(0);
}