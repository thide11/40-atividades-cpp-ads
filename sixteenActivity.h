#pragma once
#include "Activity.h"
#include <iostream>

using namespace std;

class SixteenActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Ingressos";
    };
};

namespace sixteen {
    class Ingresso {
        public:
            void imprimeValor() {
                cout << "Valor do ingresso: R$ " << valor << endl;
            }
        protected:
            float valor;
    };

    class IngressoVip : public Ingresso {
        public:
            void imprimeValor() {
                cout << "Valor do ingresso VIP: R$ " << (valor * 1.1) << endl;
            }
    };

    class Normal : public Ingresso {
        public:
            void imprimirTipo() {
                cout << "Ingresso Normal" << endl;
            }
    };

    class CamaroteInferior : public IngressoVip {
        public:
            string getLocalizacao() {
                return localizacao;
            }
            void setLocalizacao(string localizacao) {
                this->localizacao = localizacao;
            }
        private:
            string localizacao;
    };
    class CamaroteSuperior : public IngressoVip {
        public:
            void imprimeValor() {
                cout << "Valor do ingresso VIP camarote superior: R$ " << (valor * 1.2) << endl;
            }
    };
}