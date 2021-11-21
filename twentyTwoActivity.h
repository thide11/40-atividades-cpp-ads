#pragma once
#include "nineteenActivity.h"
#include "Activity.h"

class TwentyTwoActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Zoologico e jaulas";
    };
};

namespace twenty_two {
    class Zoologico {
        public:
            Zoologico() {
                // this->animais = animal;
            };
            void setAnimais(nineteen::Animal* animal[10]) {
                for(int i = 0; i < 10; i++) {
                    this->animais[i] = animal[i];
                }
            };
            void percorrerJaulas() {
                for(nineteen::Animal* animal : animais) {
                    animal->emitirSom();
                    animal->correr();
                }
            };
        private: 
            nineteen::Animal* animais[10];
    };
}