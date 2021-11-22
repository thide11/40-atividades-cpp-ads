#pragma once
#include "Activity.h"
#include <iostream>
#include <vector>

using namespace std;

class ThirtyTwoActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Lista ordenada";
    };
};

namespace thirty_two {
    class ListaOrdenada {
        public:
            void inserir(int valor) {
                if(lista.size() == 0) {
                    lista.insert(lista.end(), valor);
                } else {
                    for (auto i = lista.begin(); i != lista.end(); i++) {
                        if(*i > valor) {
                            lista.insert(i, valor);
                            return;
                        }
                    }
                }
            };
            void imprimir() {
                for (int i = 0; i < lista.size(); i++) {
                    cout << lista[i] << " ";
                }
                cout << endl;
            };
        private:
            vector<int> lista;
    };
}