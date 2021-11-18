#pragma once
#include "Activity.h"
#include <iostream>
using namespace std;
class FifteenActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Modelagem diagrama animais";
    };
};

namespace fifteen {
    class Animal {
        public:
            Animal() {};
            Animal(string nome) {
                this->nome = nome;
            }
            string caminha() {
                return "Agora esta dormindo";
            }
        private:
            string nome;
            string raca;
    };

    class Cachorro : public Animal {
        public:
            string late() {
                return "au au au au";
            }
        private:
    };

    class Gato : public Animal {
        public:
            string mia() {
                return "miauu";
            }
        private:
    };

    class Pessoa {
        public:
            Pessoa() {}
        private:
            string nome;
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
