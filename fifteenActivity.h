#pragma once
#include "Activity.h"
#include <iostream>
using namespace std;
class FifteenActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Modelagem diagrama animais";
    };
};

namespace fifteen {
    class Animal {
        public:
            Animal() {};
            Animal(char* nome) {
                this->nome = nome;
            }
            char* caminha() {
                return "Agora esta dormindo";
            }
        private:
            char* nome;
            char* raca;
    };

    class Cachorro : public Animal {
        public:
            char* late() {
                return "au au au au";
            }
        private:
    };

    class Gato : public Animal {
        public:
            char* mia() {
                return "miauu";
            }
        private:
    };

    class Pessoa {
        public:
            Pessoa() {}
        private:
            char* nome;
            int idade;
    };

    class Rica : public Pessoa {
        public:
            void fazCompras() {
                cout << "fazendo compras" << endl;
            }
        private:
            double dinheiro;
    };
    class Pobre : public Pessoa {
        public:
            void trabalha() {
                cout << "pobre ta trabalhando" << endl;
            }
        private:
    };
    class Miseravel : public Pessoa {
        public:
            void mendiga() {
                cout << "eii, voce ai, me da um dinheiro ai" << endl;
            }
        private:
    };
};
