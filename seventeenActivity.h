#pragma once
#include "Activity.h"

class SeventeenActivity : public Activity {
public:
    void run();
    const char* getActivityName() {
        return (char*)"Imoveis";
    };
};

namespace seventeen {
    class Imovel {
        public:
            void setEndereco(string endereco) {
                this->endereco = endereco;
            }
            string getEndereco() {
                return endereco;
            }
            void setPreco(float preco) {
                this->preco = preco;
            }
            float getPreco() {
                return preco;
            }
        private:
            string endereco;
        protected:
            float preco;
    };

    class Novo : public Imovel {
        public:
            float getPrecoTotal() {
                return preco + valorAdicional;
            }
            float getValorAdicional() {
                return valorAdicional;
            }
            float setValorAdicional(float valorAdicional) {
                this->valorAdicional = valorAdicional;
            }
        private:
            float valorAdicional;
    };

    class Velho : public Imovel {
        public:
            float getPrecoTotal() {
                return preco - desconto;
            }
            float getDesconto() {
                return desconto;
            }
            float setDesconto(float desconto) {
                this->desconto = desconto;
            }
        private:
            float desconto;
    };
}