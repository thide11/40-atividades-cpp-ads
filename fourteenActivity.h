#pragma once
#include "Activity.h"
#include "thirteenActivity.h"
#include <iostream>

using namespace std;

class FourteenActivity : public Activity
{
public:
    void run();
    string getActivityName() {
        return (string)"Funcionario e gerente";
    };
};

class Gerente : public Funcionario2 {
    public:
    private:
};

class Assistente : public Funcionario2 {
    public:
        int getNumeroDeMatricula() {
            return numeroDeMatricula;
        };
        void setNumeroDeMatricula(int numeroDeMatricula) {
            this->numeroDeMatricula = numeroDeMatricula;
        };
        void exibirDados() {
            Funcionario2::exibeDados();
            cout << "Numero de matricula: " << getNumeroDeMatricula() << endl;
        };
    protected:
        int numeroDeMatricula;
};

class AssistenteTecnico : public Assistente {
    public:
        getSalario() {
            //Bônus salarial do assistente técnico
            return salario * 1.1;
        }
    private:
};

class AssistenteAdministrativo : public Assistente {
    public:
        string getTurno() {
            return turno;
        }
        void setTurno(string turno) {
            this->turno = turno;
        }
        getSalario() {
            //Bônus salarial se for noturno
            if(turno == "noite") {
                return salario * 1.1;
            }
            return salario;
        }
    private:
        string turno;
};