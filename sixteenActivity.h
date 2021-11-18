#pragma once
#include "Activity.h"
#include <iostream>

using namespace std;

class SixteenActivity : public Activity {
public:
    void run();
    const char* getActivityName() {
        return (char*)"Ingressos";
    };
};

namespace sixteen {
    class Ingresso {
        public:
            imprimeValor() {
                cout << "Valor do ingresso: R$ " << valor << endl;
            }
        protected:
            float valor;
    };

    class IngressoVip : public Ingresso {
        public:
            imprimeValor() {
                cout << "Valor do ingresso VIP: R$ " << (valor * 1.1) << endl;
            }
    };

    class Normal : public Ingresso {
        public:
            imprimirTipo() {
                cout << "Ingresso Normal" << endl;
            }
    };

    class CamaroteInferior : public IngressoVip {
        public:
            char* getLocalizacao() {
                return localizacao;
            }
            void setLocalizacao(char* localizacao) {
                this->localizacao = localizacao;
            }
        private:
            char* localizacao;
    };
    class CamaroteSuperior : public IngressoVip {
        public:
            imprimeValor() {
                cout << "Valor do ingresso VIP camarote superior: R$ " << (valor * 1.2) << endl;
            }
    };
}