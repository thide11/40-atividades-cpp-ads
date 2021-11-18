#pragma once
#include "Activity.h"

class TwelveActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Exibicao pessoas";
    };
};

class Pessoa {
    public:
        Pessoa(int idade, string nome, string nacionalidade);
        Pessoa();
        int getIdade();
        void setIdade(int idade);
        string getNome();
        void setNome(string nome);
        string getNacionalidade();
        void setNacionalidade(string nacionalidade);
        bool eMaiorDeIdade();
        int horasVividas();
        void imprimirDadosCalculados();
    private:
        int idade;
        string nome;
        string nacionalidade;
};