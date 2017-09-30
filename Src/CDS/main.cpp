#include "cds.hpp"
#include "startup.hpp"

#include <stdio.h>

void runAuxillary(Manifest manifest){

}

void runPrimary(CDS cds){

}

int main(int argc, char ** argv){

    CDS cds;

    parseCmd(cds.progConfig, argc, argv);
    
    runAuxillary(cds.manifest);
    runPrimary(cds);


    return 0;
}