#pragma once
#include "Activity.h"

class TenActivity :
    public Activity
{
    public:
      void run();
      const char* getActivityName() {
          return (char*)"Exibicao aluno";
      };
};

class Aluno {
  public:
    Aluno(char* nome, char* ra, float nota1, float nota2);
    char* getNome();
    void setNome(char* nome);
    char* getRa();
    void setRa(char* ra);
    float getNota1();
    void setNota1(float nota1);
    float getNota2();
    void setNota2(float nota2);
    float getMedia();
  private:
    char* nome;
    char* ra;
    float nota1;
    float nota2;
};