#include "tenActivity.h"
#include <iostream>

using namespace std;

void TenActivity::run() {
  Aluno* aluno = new Aluno("Silvio", "325634636", 4, 5);
  cout << "Aluno1 tirou a media " << aluno->getMedia() << endl;
  Aluno* aluno2 = new Aluno("", "23636326", 1, 10);
  aluno2->setNome("Carlos");
  cout << "Aluno2 tirou a media " << aluno2->getMedia() << endl;
  Aluno* aluno3 = new Aluno("", "58568278", 0, 0);
  aluno3->setNome("Carlos");
  aluno3->setNota1(2);
  aluno3->setNota2(8);
  cout << "Aluno3 tirou a media " << aluno3->getMedia() << endl;
}

Aluno::Aluno(char* nome, char* ra, float nota1, float nota2) {
  this->nome = nome;
  this->ra = ra;
  this->nota1 = nota1;
  this->nota2 = nota2;
}

char* Aluno::getNome() {
  return this->nome;
}

void Aluno::setNome(char* nome) {
  this->nome = nome;
}

char* Aluno::getRa() {
  return this->ra;
}

void Aluno::setRa(char* ra) {
  this->ra = ra;
}

float Aluno::getNota1() {
  return this->nota1;
}

void Aluno::setNota1(float nota1) {
  this->nota1 = nota1;
}

float Aluno::getNota2() {
  return this->nota2;
}

void Aluno::setNota2(float nota2) {
  this->nota2 = nota2;
}

float Aluno::getMedia() {
  return (this->nota1 + this->nota2) / 2;
}