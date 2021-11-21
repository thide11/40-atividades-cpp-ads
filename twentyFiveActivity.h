#pragma once
#include "twentyFourActivity.h"
#include "Activity.h"

class TwentyFiveActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Empresa com 10 funcionarios";
    };
};

namespace twenty_five {
    class Empresa {
    public:
        void setFuncionarios(twenty_four::Funcionario* funcionario[10]) {
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
            for(twenty_four::Funcionario* funcionario : funcionarios) {
                if(funcionario->getNivelEscolaridade() == categoria) {
                    total += funcionario->getRendaTotal();
                }
            }
            return total;
        }
    private: 
        twenty_four::Funcionario* funcionarios[10];
    };
}