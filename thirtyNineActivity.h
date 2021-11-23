#pragma once
#include "Activity.h"

class ThirtyNineActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Equipamento e equipamento corrigido";
    };
};

namespace thirty_nine {
    class Equipamento {
        public:
            Equipamento(int numeroEquipamentos) {
                valor = new int[numeroEquipamentos];
            }
            int getNumeroEquipamentos() {
                return sizeof(valor)/sizeof(valor[0]);
            }
            int getValor(int numero) {
                return this->valor[numero];
            }
            void setValor(int numero, int valor) {
                this->valor[numero] = valor;
            }
        private:
            int* valor;
    };

    class EquipamentoCorrigido : public Equipamento {
        public:
            EquipamentoCorrigido(int numeroEquipamentos) : Equipamento(numeroEquipamentos) {
                listaMesCompraEquipamentos = new int[numeroEquipamentos];
            }
            int getMesCompra(int numero) {
                return this->listaMesCompraEquipamentos[numero]+1;
            }
            void setMesCompra(int numero, int mes) {
                this->listaMesCompraEquipamentos[numero] = (mes-1);
            }
            void corrige(int percentual) {
                for (int i = 0; i < this->getNumeroEquipamentos(); i++) {
                    if(getMesCompra(i) == mesCorrente) {
                        this->setValor(i, this->getValor(i) * (100 + percentual) / 100);
                    }
                }
                if(mesCorrente == 11) {
                    mesCorrente = 0;
                } else {
                    mesCorrente++;
                }
            }
            void substitui(EquipamentoCorrigido* outro) {
                if(outro->getNumeroEquipamentos() == getNumeroEquipamentos()) {
                    for (int i = 0; i < getNumeroEquipamentos(); i++) {
                        this->setValor(i, outro->getValor(i));
                        this->setMesCompra(i, outro->getMesCompra(i));
                    }
                }
            }
        private:
            int* listaMesCompraEquipamentos;
            int mesCorrente = 0;
    };
}