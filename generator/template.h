#pragma once
#include "Activity.h"

class {{pascalCase}}Activity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"";
    };
};

namespace {{snakeCase}} {
    //Implementacao aqui
}