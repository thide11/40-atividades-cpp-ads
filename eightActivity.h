#pragma once
#include "Activity.h"
class EightActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Exibicao produto";
    };
};

class Produto {
  public:
    Produto(int codigo, const char* descricao, double preco);
    void mostrarDados();
  private:
    int codigo;
    const char* descricao;
    double preco;
};