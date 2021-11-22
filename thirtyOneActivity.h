#pragma once
#include "thirtyActivity.h"
#include "Activity.h"
#include <map>
#include <iostream>

using namespace std;

class ThirtyOneActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Operacoes na lista";
    };
};

namespace thirty_one {
    struct ValorEQtd {
        int valor;
        int qtd;
    };
    //Implementacao aqui
    class ListaParser {
        public:
            ListaParser(thirty::Lista* lista) {
                for (int i = 0; i < lista->pegarTamanho(); i++) {
                    int valor = lista->pegarIndex(i);
                    if(i == 0) {
                        maiorNumeroValor = valor;
                        maiorNumeroQuantidade = 1;
                        menorNumeroValor = valor;
                        menorNumeroQuantidade = 1;
                    }
                    auto iterator = valorEQuantidade.find(valor);
                    if(iterator == valorEQuantidade.end()) {
                        valorEQuantidade[valor] = 1;
                    } else {
                        valorEQuantidade[valor]++;
                    }
                }
                for (auto itr = valorEQuantidade.begin(); itr != valorEQuantidade.end(); ++itr) {
                    if(itr->second >= maiorNumeroQuantidade) {
                        maiorNumeroValor = itr->first;
                        maiorNumeroQuantidade = itr->second;
                    }
                    if(itr->second <= menorNumeroQuantidade) {
                        menorNumeroValor = itr->first;
                        menorNumeroQuantidade = itr->second;
                    }
                    cout << "O elemento com o numero " << itr->first
                        << " se repete " << itr->second << " vez(es)\n";
                }
            }


            void imprimirElementosExtremos() {
                cout << "O elemento que menos se repete aparece apenas ";
                cout << menorNumeroQuantidade << " vez(es), ";
                cout << "e tem o valor " << menorNumeroValor << " e o elemento que mais se repete aparece ";
                cout << maiorNumeroQuantidade << " vez(es), e tem o valor " << maiorNumeroValor << "\n";
            }

        private:
            map<int, int> valorEQuantidade;
            int maiorNumeroValor;
            int maiorNumeroQuantidade;
            int menorNumeroValor;
            int menorNumeroQuantidade;
    };
}