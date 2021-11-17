#pragma once
#include "Activity.h"
#include "sixActivity.h"
class NineActivity :
    public Activity
{
    public:
        void run();
        const char* getActivityName() {
            return (char*)"Exibicao transferencia de contas";
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
      ContaComTransferencia(char* anumero, char* atitular, int asaldo, int alimite);
      void importarConta(Conta* conta);
};