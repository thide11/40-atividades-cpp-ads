#pragma once
#include "thirtySixActivity.h"
#include "Activity.h"

class ThirtyEightActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Voo com fumantes";
    };
};

namespace thirty_eight {
    class VooComFumantes : public thirty_six::Voo {
        public:
            VooComFumantes(int numeroDoVoo, thirty_five::Data* data, int numeroDeNaoFumantes, int numeroDeVagasFumantes) 
            : Voo(numeroDoVoo, data, numeroDeNaoFumantes + numeroDeVagasFumantes) {
                this->numeroDeNaoFumantes = numeroDeNaoFumantes;
                this->numeroDeVagasFumantes = numeroDeVagasFumantes;
            }

            int maxVagas() {
                return this->numeroDeVagasFumantes + this->numeroDeNaoFumantes;
            }

            char tipo(int numeroCadeira) {
                if(numeroCadeira >= this->numeroDeNaoFumantes) {
                    return 'F';
                } else {
                    return 'N';
                }
            }

            int getQuantidadeDeFumantes() {
                return numeroDeVagasFumantes;
            }
        private:
            int numeroDeVagasFumantes;
            int numeroDeNaoFumantes;

    };
}