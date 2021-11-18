#include "twelveActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwelveActivity::run() {
  Pessoa* pessoa = new Pessoa();
  pessoa->setNome("Joao");
  pessoa->setIdade(20);
  pessoa->setNacionalidade("Brasileiro");
  pessoa->imprimirDadosCalculados();
  Pessoa* pessoa2 = new Pessoa(10, "Mario", "Argentino");
  pessoa2->imprimirDadosCalculados();
  Pessoa* pessoa3 = new Pessoa(24, "Jackson", "Chileno");
  pessoa3->setIdade(pessoa3->getIdade() + 1);
  pessoa3->imprimirDadosCalculados();
};

Pessoa::Pessoa() {};

Pessoa::Pessoa(int idade, char* nome, char* nacionalidade) {
  this->idade = idade;
  this->nome = nome;
  this->nacionalidade = nacionalidade;
}

int Pessoa::getIdade() {
  return this->idade;
}

void Pessoa::setIdade(int idade) {
  this->idade = idade;
}

char* Pessoa::getNome() {
  return this->nome;
}

void Pessoa::setNome(char* nome) {
  this->nome = nome;
}

char* Pessoa::getNacionalidade() {
  return this->nacionalidade;
}

void Pessoa::setNacionalidade(char* nacionalidade) {
  this->nacionalidade = nacionalidade;
}

bool Pessoa::eMaiorDeIdade() {
  return this->idade >= 18;
}

int Pessoa::horasVividas() {
  return this->idade * 365 * 24;
}

void Pessoa::imprimirDadosCalculados() {
  const char* maiorDeIdade;
  if(eMaiorDeIdade()) {
    maiorDeIdade = "e";
  } else {
    maiorDeIdade = "nao e";
  }
  cout << "O " << this->nome << " " << maiorDeIdade << " maior de idade" << endl;
  cout << "E tem pelo menos " << horasVividas() << " horas de vida" << endl;
}