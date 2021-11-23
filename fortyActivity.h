#pragma once
#include "Activity.h"
#include <vector>
#include <iostream>

using namespace std;

class FortyActivity : public Activity {
public:
    void run();
    string getActivityName() {
        return (string)"Pessoa e repositorio";
    };
};

namespace forty {
    class Pessoa {
        public:
            Pessoa(string nome, string cpf) {
                this->nome = nome;
                this->cpf = cpf;
            }
            string getCPF() {
                return this->cpf;
            }
            string getNome() {
                return this->nome;
            }
        private:
            string nome;
            string cpf;
    };
    class Repositorio {
        public:
            void guarda(Pessoa* nova) {
                pessoa.insert(pessoa.end(), nova);
            }
            Pessoa* recupera(string cpf) {
                for(Pessoa* pessoa : pessoa) {
                    if(pessoa->getCPF() == cpf) {
                        return pessoa;
                    }
                }
                return NULL;
            }
            Pessoa* primeiro() {
                if(pessoa.size() == 0) {
                    return NULL;
                }
                index = 0;
                return pessoa[0];
            }
            Pessoa* proximo() {
                if(pessoa.size() - 1 > index) {
                    return NULL;
                }
                index++;
                return pessoa[index];
            }
        private:
            int index = 0;
            vector<Pessoa*> pessoa;
    };
    class Utilitarios {
        public:
            void duplica(Repositorio* a, Repositorio* b) {
                Pessoa* pessoa = a->primeiro();
                while(pessoa != NULL) {
                    b->guarda(pessoa);
                    pessoa = a->proximo();
                }
            }
            void diferenca(Repositorio* a, Repositorio* b, Repositorio* c) {
                vector<Pessoa*> pessoaIncrementar;
                Pessoa* pessoaA = a->primeiro();
                
                int index = 0;
                while(pessoaA != NULL) {
                    bool finded = false;
                    Pessoa* pessoaB = b->primeiro();
                    while(pessoaB != NULL) {
                        if(pessoaA->getCPF() == pessoaB->getCPF()) {
                            finded = true;
                            break;
                        }
                        Pessoa* pessoaB = b->primeiro();
                    }
                    if(finded == false) {
                        pessoaIncrementar.insert(pessoaIncrementar.end(), pessoaA);
                    }
                    pessoaA = a->proximo();
                }

                for(Pessoa* pessoa : pessoaIncrementar) {
                    c->guarda(pessoa);
                }
            }
        private:
    };
}