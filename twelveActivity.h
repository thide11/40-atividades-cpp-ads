#pragma once
#include "Activity.h"

class TwelveActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Exibicao pessoas";
    };
};

class Pessoa {
    public:
        Pessoa(int idade, char* nome, char* nacionalidade);
        Pessoa();
        int getIdade();
        void setIdade(int idade);
        char* getNome();
        void setNome(char* nome);
        char* getNacionalidade();
        void setNacionalidade(char* nacionalidade);
        bool eMaiorDeIdade();
        int horasVividas();
        void imprimirDadosCalculados();
    private:
        int idade;
        char* nome;
        char* nacionalidade;
};