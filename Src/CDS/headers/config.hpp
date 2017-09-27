#ifndef CONFIG
#define CONFIG

#include <string>

class Config{

public:

    std::string profile;

    bool load();

    Config();
};

#endif