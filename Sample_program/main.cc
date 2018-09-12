#include <stdio.h>
#include "ranvar.h"
#include "ranvar.cc"

int main(){
    EmpiricalRandomVariable* flow = new  EmpiricalRandomVariable;
    flow->loadCDF("workload_search.tcl");
    char* flow_text;

    for(int i=0; i<1; i++)

        flow_text=flow->flow_text();
        printf("%s\n", flow_text);
        printf("%d\n", (int) strlen(flow_text));

    return 0;
}