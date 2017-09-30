#ifndef CDS_GEN
#define CDS_GEN

#include "config.hpp"
#include "profile.hpp"
#include "manifest.hpp"

//general info aggregate
class CDS {

public:

    Config progConfig;
    Profile emProfile;
    Manifest manifest;

    CDS();
};

#endif