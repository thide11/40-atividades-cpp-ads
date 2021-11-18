#pragma once
#include "Activity.h"

class SevenActivity :
    public Activity
{
    public:
      void run();
      string getActivityName() {
          return (string)"Exibicao Funcionario";
      };
};

class Funcionario {
    public:
        Funcionario();
        Funcionario(string codigo, string nome, float salario);
        void mostrarDados();
    private:
        string codigo;
        string nome;
        float salario;
};