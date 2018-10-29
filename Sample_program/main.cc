#include <stdio.h>
#include "ranvar.h"
#include "ranvar.cc"

#define NUMBER_OF_FLOWS 100000
#define INPUT_CDF_FILE "workload_mining.tcl"

int main(){

    EmpiricalRandomVariable* flow = new  EmpiricalRandomVariable(INPUT_CDF_FILE);
    //flow->loadCDF(INPUT_CDF_FILE);
    //char* flow_text[NUMBER_OF_FLOWS];

    for(int i=0; i<NUMBER_OF_FLOWS; i++)
    {
        //flow_text[i]=flow->flow_text();
        // printf("%d\n", (int) strlen(flow_text[i]));
        //printf("%s\n", flow_text[i]);
        printf("%f\n", flow->value());
    }
    return 0;
}