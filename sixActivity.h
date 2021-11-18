#pragma once
#include "Activity.h"

class SixActivity :
    public Activity
{
    public:
      void run();
      string getActivityName() {
          return (string)"Exibicao conta bancaria";
      };
};

class Conta {
    public:
        Conta();
        Conta(string anumero, string atitular, int asaldo, int alimite);
        void depositar(int valor);
        void sacar(int valor);
        void extrato();
        int getSaldo();
        void zerarSaldo();
        int getLimite();
    protected:
        string numero;
        string nome;
        int saldo;
        int limite;
};