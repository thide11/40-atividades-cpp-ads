#pragma once
#include "Activity.h"
class ThirteenActivity : public Activity
{
public:
    void run();
    const char* getActivityName() {
        return (char*)"Exibicao salario";
    };
};

class Funcionario2 {
    public:
        Funcionario2(char* nome, float salario, char* cargo);
        Funcionario2();
        char* getNome();
        void setNome(char* nome);
        void setSalario(float salario);
        float getSalario();
        void setCargo(char* cargo);
        char* getCargo();
        float calcularSalarioComReajuste();
        void exibeDados();
    protected:
        char* nome;
        float salario;
        char* cargo;
};