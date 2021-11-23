#pragma once
#include "Activity.h"

class ThirtyFourActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Alunos com calculo de media e final";
    };
};

namespace thirty_four {
    class Aluno {
        public:
            Aluno(string matricula, string nome, float nota1, float nota2, float notaTrabalho) {
                this->matricula = matricula;
                this->nome = nome;
                this->nota1 = nota1;
                this->nota2 = nota2;
                this->notaTrabalho = notaTrabalho;
            }
            float media() {
                return (nota1 * 2.5 + nota2 * 2.5 + notaTrabalho * 2) / 7;
            }
            float final() {
                float media = this->media();
                if(media >= 6) {
                    return 0;
                } else {
                    return 6 - media;
                }
            }
        private:
            string matricula;
            string nome;
            float nota1;
            float nota2;
            float notaTrabalho;
    };
}