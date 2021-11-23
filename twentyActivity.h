#pragma once
#include "Activity.h"

class TwentyActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Implementar atividade 19";
    };
};