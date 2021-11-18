#pragma once
#include "Activity.h"

class {{pascalCase}}Activity : public Activity {
public:
    void run();
    const char* getActivityName() {
        return (char*)"";
    };
};

namespace {{snakeCase}} {
    //Implementacao aqui
}