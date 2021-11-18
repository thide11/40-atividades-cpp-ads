#pragma once
#include "Activity.h"
#include "sixActivity.h"
class NineActivity :
    public Activity
{
    public:
        void run();
        string getActivityName() {
            return (string)"Exibicao transferencia de contas";
        };
    private:
        int sumOldSalary = 0;
        float sumDiference, sumNewSalary = 0;
        float calculateNewSalary(int oldSalary);
        void showSums();
};

class ContaComTransferencia :
    public Conta
{
  public:
      ContaComTransferencia();
      ContaComTransferencia(string anumero, string atitular, int asaldo, int alimite);
      void importarConta(Conta* conta);
};