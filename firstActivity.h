#pragma once
#include "Activity.h"
class FirstActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Impares entre dois numeros";
    };
};