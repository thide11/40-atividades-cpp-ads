#pragma once
#include "Activity.h"
class ThirdActivity :
    public Activity
{
public:
    void run();
    char* getActivityName() {
        return (char*)"Numero é do Fibonacci?";
    };
};

