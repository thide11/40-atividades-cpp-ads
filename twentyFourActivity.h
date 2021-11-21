#pragma once
#include "Activity.h"

class TwentyFourActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Modelagem funcionario com renda";
    };
};

namespace twenty_four {
    class Funcionario {
        public: 
            virtual double getRendaTotal() {
                return this->renda_basica;
            }
            string nome;
            virtual string getNivelEscolaridade() = 0;
            string codigo_funcional;
            double renda_basica = 1000;
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
            virtual double getRendaTotal() {
                return this->renda_basica * 1.1;
            }
    };

    class FuncionarioEnsinoMedio : public FuncionarioComEnsino {
        public:
            virtual string getNivelEscolaridade() {
                return "ensino medio";
            }
            virtual double getRendaTotal() {
                return this->renda_basica * 1.5;
            }
    };
    
    class FuncionarioGraduacao : public FuncionarioComEnsino {
        public:
            virtual string getNivelEscolaridade() {
                return "graduacao";
            }
            virtual double getRendaTotal() {
                return this->renda_basica * 2;
            }
            string universidade;
    };
}