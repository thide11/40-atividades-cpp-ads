#pragma once
#include "Activity.h"
class FirstActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Impares entre dois numeros";
    };
};