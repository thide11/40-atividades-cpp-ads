#pragma once
#include "Activity.h"

class ThirtyThreeActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Alunos";
    };
};

namespace thirty_three {
    class Alunos {

    };
}