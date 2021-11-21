#pragma once
#include "nineteenActivity.h"
#include "Activity.h"

class TwentyOneActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Veterinario examinar animais";
    };
};

namespace twenty_one {
    class Veterinario {
    public:
        void examinar(nineteen::Animal* animal) {
            animal->emitirSom();
        };
    };
}