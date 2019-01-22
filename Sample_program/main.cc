#include <stdio.h>
#include "ranvar.h"
#include "ranvar.cc"

#define NUMBER_OF_FLOWS 100
#define INPUT_CDF_FILE "workload_mining.tcl"

int main(){

    EmpiricalRandomVariable* flow = new  EmpiricalRandomVariable(INPUT_CDF_FILE);

    for(int i=0; i<NUMBER_OF_FLOWS; i++)
    {
        printf("%ld\n", flow->get_length());
    }
    return 0;
}
