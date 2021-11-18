#pragma once
#include "Activity.h"
class ThirteenActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Exibicao salario";
    };
};

class Funcionario2 {
    public:
        Funcionario2(string nome, float salario, string cargo);
        Funcionario2();
        string getNome();
        void setNome(string nome);
        void setSalario(float salario);
        float getSalario();
        void setCargo(string cargo);
        string getCargo();
        float calcularSalarioComReajuste();
        void exibeDados();
    protected:
        string nome;
        float salario;
        string cargo;
};