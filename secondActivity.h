#pragma once
#include "Activity.h"
class SecondActivity :
    public Activity
{
    public:
        void run();
        const char* getActivityName() {
            return (char*)"Reajuste de salario";
        };
    private:
        int sumOldSalary = 0;
        float sumDiference, sumNewSalary = 0;
        float calculateNewSalary(int oldSalary);
        void showSums();
};

class Employee {
public:
    int salary;
    string name;
};