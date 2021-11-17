#pragma once
#include "Activity.h"
class ThirdActivity :
    public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Numero e do Fibonacci?";
    };
};

