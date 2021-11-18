#pragma once
#include "Activity.h"
class EightActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Exibicao produto";
    };
};

class Produto {
  public:
    Produto(int codigo, string descricao, double preco);
    void mostrarDados();
  private:
    int codigo;
    string descricao;
    double preco;
};