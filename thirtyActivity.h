#pragma once
#include "Activity.h"
#include <vector>
#include <iostream>

using namespace std;

class ThirtyActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Implementacao lista";
    };
};

namespace thirty {
    class Lista {
        public:
            void inserir(int valor) {
                lista.insert(lista.end(), valor);
            }
            void exibir() {
                for(int elemento : lista) {
                    cout << elemento << endl;
                }
            }
            bool remover(int valor) {
                int index = procurar(valor);
                if(index != -1) {
                    int counter = 0;
                    for (auto i = lista.begin(); i != lista.end(); ++i) {
                        if (counter == index) {
                            lista.erase(i);
                            return true;
                            break;
                        }
                        counter++;
                    }
                    return false;
                }
                return false;
            }
            int procurar(int valor) {
                for(int i = 0; i < lista.size(); i++) {
                    if(lista[i] == valor) {
                        return i;
                    }
                }
                return -1;
            }
            int pegarIndex(int index) {
                return lista[index];
            }
            int pegarTamanho() {
                return (int) lista.size();
            }
            void alterar(int index, int valor) {
                lista[index] = valor;
            }
            void esvaziar() {
                lista.clear();
            }
        private:
            vector<int> lista;
    };
}