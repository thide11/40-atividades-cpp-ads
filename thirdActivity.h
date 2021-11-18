#pragma once
#include "Activity.h"
class ThirdActivity :
    public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Numero e do Fibonacci?";
    };
};

