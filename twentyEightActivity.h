#pragma once
#include "twentySevenActivity.h"
#include "Activity.h"

class TwentyEightActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Empresa 10 funcionarios com comissao";
    };
};

namespace twenty_eight {
    //Empresa reeimplementada, só que agora com implementação de funcionario do namespace twenty_seven
    class Empresa {
        public:
            void setFuncionarios(twenty_seven::Funcionario* funcionario[10]) {
                for(int i = 0; i < 10; i++) {
                    this->funcionarios[i] = funcionario[i];
                }
            };
            double calcularGastoComSalario() {
                double total = calcularGastoComSalarioPorCategoria("ensino basico") +
                    calcularGastoComSalarioPorCategoria("ensino medio") +
                    calcularGastoComSalarioPorCategoria("graduacao");
                return total;
            };
            double calcularGastoComSalarioPorCategoria(string categoria) {
                double total = 0;
                for(twenty_seven::Funcionario* funcionario : funcionarios) {
                    if(funcionario->getNivelEscolaridade() == categoria) {
                        total += funcionario->getRendaTotal();
                    }
                }
                return total;
            }
        private: 
            twenty_seven::Funcionario* funcionarios[10];
    };
}