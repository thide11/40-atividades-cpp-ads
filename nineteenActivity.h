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
            virtual void emitirSom() = 0;
            string nome;
            int idade;
    };
    class Cachorro : public Animal {
        public:
            virtual void emitirSom() {
                cout << "Au au" << endl;
            }
            void correr() {
                cout << "Cachorro correndo..." << endl;
            }
    };
    class Cavalo : public Animal {
        public:
            virtual void emitirSom() {
                cout << "ihihihihi" << endl;
            }
            void correr() {
                cout << "Cavalo correndo..." << endl;
            }
    };
    class Preguica : public Animal {
        public:
            virtual void emitirSom() {
                cout << "roncc..." << endl;
            }
            void subirEmArvores() {
                cout << "Bixo preguica esta subindo em uma arvore..." << endl;
            }
    };
}