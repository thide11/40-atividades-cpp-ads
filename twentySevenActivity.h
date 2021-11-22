#pragma once
#include "twentySixActivity.h"
#include "Activity.h"

class TwentySevenActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Funcionarios com suporte a comissoes";
    };
};

namespace twenty_seven {
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
            virtual string getNivelEscolaridade() {
                return "ensino basico";
            };
            virtual double getPorcentagemDeBonus() {
                return 10;
            }
    };

    class FuncionarioEnsinoMedio : public FuncionarioComEnsino {
        public:
            virtual string getNivelEscolaridade() {
                return "ensino medio";
            }
            virtual double getPorcentagemDeBonus() {
                return 50;
            }
    };
    
    class FuncionarioGraduacao : public FuncionarioComEnsino {
        public:
            virtual string getNivelEscolaridade() {
                return "graduacao";
            }
            virtual double getPorcentagemDeBonus() {
                return 100;
            }
            string universidade;
    };
}