#pragma once
#include "thirtyFiveActivity.h"
#include "Activity.h"

class ThirtySixActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Voo";
    };
};

namespace thirty_six {
    class Voo {
        public:
            Voo(int numeroDoVoo, thirty_five::Data* data) {
                this->numeroDoVoo = numeroDoVoo;
                this->data = data;
                this->tamanho = 100;
                this->passageiros = new bool[tamanho];
            }
            Voo(int numeroDoVoo, thirty_five::Data* data, int tamanho) {
                this->numeroDoVoo = numeroDoVoo;
                this->data = data;
                this->tamanho = tamanho;
                this->passageiros = new bool[tamanho];
            }
            thirty_five::Data* getData() {
                return this->data;
            }
            int proximoLivre() {
                for (size_t i = 0; i < tamanho; i++)  {
                    if(passageiros[i] == false) {
                        return i;
                    }
                }
                return -1;
            }
            int vagas() {
                int vagasLivres = 0;
                for (size_t i = 0; i < tamanho; i++)  {
                    if(passageiros[i] == false) {
                        vagasLivres++;
                    }
                }
                return vagasLivres;
            }
            bool ocupar(int index) {
                if(passageiros[index] == true) {
                    return false;
                } else {
                    passageiros[index] = true;
                    return true;
                }
            }
            int getVoo() {
                return this->numeroDoVoo;
            }
            Voo* clone() {
                Voo* voo = new Voo(this->numeroDoVoo, this->data);
                for (size_t i = 0; i < tamanho; i++)  {
                    if(passageiros[i] == true) {
                        voo->ocupar(i);
                    }
                }
                return voo;
            }
        protected:
            int tamanho;
        private:
            thirty_five::Data* data;
            int numeroDoVoo;
            bool* passageiros;
    };
}