#pragma once
#include "Activity.h"
class SecondActivity :
    public Activity
{
    public:
        void run();
        char* activityName = (char*) "Reajuste de salário";
    private:
        int sumOldSalary, sumDiference, sumNewSalary = 0;
        float calculateNewSalary(int oldSalary);
        void showSums();
};

