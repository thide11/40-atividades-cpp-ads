#pragma once
#include "Activity.h"

class TwentyThreeActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Modelagem funcionario";
    };
};

namespace twenty_three {
    class Funcionario {
        public:
            string nome;
            string codigo_funcional;
            double renda_basica = 1000;
    };

    class FuncionarioComEnsino : public Funcionario {
        public:
            string escola;
    };

    class FuncionarioEnsinoBasico : public FuncionarioComEnsino {
    };

    class FuncionarioEnsinoMedio : public FuncionarioComEnsino {
    };
    
    class FuncionarioGraduacao : public FuncionarioComEnsino {
        public:
            string universidade;
    };
}