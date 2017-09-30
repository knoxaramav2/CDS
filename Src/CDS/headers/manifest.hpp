#ifndef MANIFEST
#define MANIFEST

#include <string>

class Manifest{

public:

    //action flags**************

    //auxillary
    bool printVersion;
    bool printHelp;
    
    //optional
    bool loadProjProfile;
    
    //state
    std::string projectPath;
    std::string exportType;

    Manifest();

};

#endif