#include "cds.hpp"
#include "startup.hpp"

#include <stdio.h>

int main(int argc, char ** argv){

    CDS cds;

    parseCmd(cds.progConfig, argc, argv);


    return 0;
}