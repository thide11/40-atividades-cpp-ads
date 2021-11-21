#pragma once
#include "Activity.h"
#include <iostream>

using namespace std;

class NineteenActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Criacao animais";
    };
};

namespace nineteen {
    class Animal {
        public:
            virtual void correr() = 0;
            virtual void emitirSom() = 0;
            string nome;
            int idade;
    };
    class Cachorro : public Animal {
        public:
            virtual void emitirSom() {
                cout << "Au au" << endl;
            }
            virtual void correr() {
                cout << "Cachorro correndo..." << endl;
            }
    };
    class Cavalo : public Animal {
        public:
            virtual void emitirSom() {
                cout << "ihihihihi" << endl;
            }
            virtual void correr() {
                cout << "Cavalo correndo..." << endl;
            }
    };
    class Preguica : public Animal {
        public:
            virtual void emitirSom() {
                cout << "roncc..." << endl;
            }
            virtual void correr() {}
            void subirEmArvores() {
                cout << "Bixo preguica esta subindo em uma arvore..." << endl;
            }
    };
}