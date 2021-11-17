#pragma once
#include "Activity.h"

class SixActivity :
    public Activity
{
    public:
      void run();
      const char* getActivityName() {
          return (char*)"Exibicao conta bancaria";
      };
};

class Conta {
    public:
        Conta();
        Conta(char* anumero, char* atitular, int asaldo, int alimite);
        void depositar(int valor);
        void sacar(int valor);
        void extrato();
        int getSaldo();
        void zerarSaldo();
        int getLimite();
    protected:
        char* numero;
        char* nome;
        int saldo;
        int limite;
};