#pragma once
#include "Activity.h"

class ThirtySevenActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Provas e gabarito";
    };
};

namespace thirty_seven {
    class Gabarito {
        public:
            void adicionarResposta(char resposta) {
                this->gabarito[index] = resposta;
                index++;
            }
            char respostaQuestao(int numeroQuestao) {
                if(numeroQuestao >= 15) {
                    return 'N';
                }
                return gabarito[numeroQuestao];
            }
        private:
            int index = 0;
            char gabarito[15];
    };
    class Prova {
        public:
            Prova(thirty_seven::Gabarito* gabarito) {
                this->gabarito = gabarito;
            }
            void respostaAluno(char resposta) {
                if(questaoAtual >= 15) {
                    return;
                }
                respostas[questaoAtual] = resposta;
            }
            int acertos() {
                int acertosProva = 0;
                for (int i = 0; i < 15; i++) {
                    if(respostas[i] == gabarito->respostaQuestao(i)) {
                        acertosProva++;
                    }
                }
                return acertosProva;
            }
            float nota() {
                float nota = 0;
                for (int i = 0; i < 15; i++) {
                    if(respostas[i] == gabarito->respostaQuestao(i)) {
                        if(i <= 10) {
                            nota += 0.5;
                        } else {
                            nota += 1;
                        }
                    }
                }
                return nota;
            }
            float maior(Prova* prova) {
                int acertosProva = acertos();
                int acertosProvaAdversaria = prova->acertos();
                if(acertosProva > acertosProvaAdversaria) {
                    return acertosProva;
                } else if (acertosProva < acertosProvaAdversaria) {
                    return acertosProvaAdversaria;
                } else {
                    int notaProva = nota();
                    int notaProvaAdversaria = prova->nota();
                    if(notaProva > notaProvaAdversaria) {
                        return notaProva;
                    } else if (notaProva < notaProvaAdversaria) {
                        return notaProvaAdversaria;
                    } else {
                        return notaProvaAdversaria;
                    }
                }
            }
        private:
            char respostas[15];
            int questaoAtual = 0;
            Gabarito* gabarito;
    };
}