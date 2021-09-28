#include "firstActivity.h";
#include "activity.h";
#include "secondActivity.h";
#include <iostream>

int main()
{
    setlocale(LC_ALL, "pt_BR");
    Activity* activities[] = {
        new FirstActivity(),
        new SecondActivity(),
    };
    for (int i = 0; i < sizeof(activities); i++) {
        FirstActivity b;
        std::cout << b.activityName;

        /*
        Activity* a = activities[i];
        std::cout << a->activityName << std::endl;
        activities[i]->run();
        */
    }
}