#pragma once
#include "Activity.h"

class SevenActivity :
    public Activity
{
    public:
      void run();
      const char* getActivityName() {
          return (char*)"Exibicao Funcionario";
      };
};

class Funcionario {
    public:
        Funcionario();
        Funcionario(char* codigo, char* nome, float salario);
        void mostrarDados();
    private:
        char* codigo;
        char* nome;
        float salario;
};