#include <stdio.h>
#include "ranvar.h"
#include "ranvar.cc"

int main(){
    class EmpiricalRandomVariable flow_size;
    flow_size.loadCDF("workload_webserver.tcl");


    for(int i=0; i<100; i++)
        printf("%f\n", flow_size.value());

    return 0;
}