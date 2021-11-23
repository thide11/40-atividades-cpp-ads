#pragma once
#include "Activity.h"
#include <iostream>

using namespace std;

class ThirtyFiveActivity : public Activity {
    public:
        void run();
        string getActivityName() {
            return (string)"Modelagem Data";
        };
};

namespace thirty_five {
    class Data {
        public:
            Data(int dia, int mes, int ano) {
                if(dia >= 31) {
                    cout << "O dia informado e invalido" << endl;
                    return;
                }
                if(mes >= 12) {
                    cout << "A data informada e invalida" << endl;
                    return;
                }
                this->dia = dia;
                this->mes = mes - 1;
                this->ano = ano;
            }
            int getDia() {
                return this->dia;
            }
            int getMes() {
                return this->mes + 1;
            }
            
            string getMesExtenso() {
                string months[] = {
                    "Janeiro",
                    "Fevereiro",
                    "Marco",
                    "Abril",
                    "Maio",
                    "Junho",
                    "Julho",
                    "Agosto",
                    "Setembro",
                    "Outubro",
                    "Novembro",
                    "Dezembro"
                };

                return months[mes];
            }

            int getAno() {
                return this->ano;
            }

            int compara(Data* data) {
                if(this->ano > data->getAno()) {
                    return 1;
                }
                if(this->ano < data->getAno()) {
                    return -1;
                }
                if(this->mes > data->getMes()) {
                    return 1;
                }
                if(this->mes < data->getMes()) {
                    return -1;
                }
                if(this->dia > data->getDia()) {
                    return 1;
                }
                if(this->dia < data->getDia()) {
                    return -1;
                }
                return 0;
            }

            bool isBissexto() {
                if(this->ano % 4 == 0) {
                    return true;
                }
                return false;
            }

            Data* clone() {
                return new Data(this->dia, this->mes, this->ano);
            }
        private:
            int dia;
            int mes;
            int ano;
    };
}