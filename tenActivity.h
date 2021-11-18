#pragma once
#include "Activity.h"

class TenActivity :
    public Activity
{
    public:
      void run();
      string getActivityName() {
          return (string)"Exibicao aluno";
      };
};

class Aluno {
  public:
    Aluno(string nome, string ra, float nota1, float nota2);
    string getNome();
    void setNome(string nome);
    string getRa();
    void setRa(string ra);
    float getNota1();
    void setNota1(float nota1);
    float getNota2();
    void setNota2(float nota2);
    float getMedia();
  private:
    string nome;
    string ra;
    float nota1;
    float nota2;
};