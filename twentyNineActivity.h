#pragma once
#include "twentySixActivity.h"
#include "Activity.h"

using namespace std;

class TwentyNineActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Sobrescrever toString funcionario";
    };
};

namespace twenty_nine {
    class Funcionario {
        public: 
            double getRendaTotal() {
                return 
                    this->renda_basica * (1 + getPorcentagemDeBonus() / 100) + getValorDaComissao();
            }
            virtual string getNivelEscolaridade() = 0;
            virtual double getPorcentagemDeBonus() = 0;
            Funcionario* setComissao(twenty_six::Comissao* comissao) {
                this->comissao = comissao;
                return this;
            };
            double getValorDaComissao() {
                if(comissao != NULL) {
                    return this->comissao->getValorComissao();
                }
                return 0;
            };
            string nome;
            string codigo_funcional;
            double renda_basica = 1000;
            string toString() {
                return "Nome: " + nome + "\nRenda: " + to_string(this->getRendaTotal()) + "\nComissao: " + to_string(this->getValorDaComissao());
            }
        private:
            twenty_six::Comissao* comissao;
    };

    class FuncionarioComEnsino : public Funcionario {
        public:
            virtual string getNivelEscolaridade() = 0;
            string escola;
    };

    class FuncionarioEnsinoBasico : public FuncionarioComEnsino {
        public:
            FuncionarioEnsinoBasico(string nome) {
                this->nome = nome;
            };
            virtual string getNivelEscolaridade() {
                return "ensino basico";
            };
            virtual double getPorcentagemDeBonus() {
                return 10;
            }
    };

    class FuncionarioEnsinoMedio : public FuncionarioComEnsino {
        public:
            FuncionarioEnsinoMedio(string nome) {
                this->nome = nome;
            };
            virtual string getNivelEscolaridade() {
                return "ensino medio";
            }
            virtual double getPorcentagemDeBonus() {
                return 50;
            }
    };
    
    class FuncionarioGraduacao : public FuncionarioComEnsino {
        public:
            FuncionarioGraduacao(string nome) {
                this->nome = nome;
            };
            virtual string getNivelEscolaridade() {
                return "graduacao";
            }
            virtual double getPorcentagemDeBonus() {
                return 100;
            }
            string universidade;
    };


    class Empresa {
    public:
        void setFuncionarios(Funcionario* funcionario[10]) {
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
            for(Funcionario* funcionario : funcionarios) {
                if(funcionario->getNivelEscolaridade() == categoria) {
                    total += funcionario->getRendaTotal();
                }
            }
            return total;
        }
    private: 
        Funcionario* funcionarios[10];
    };

}