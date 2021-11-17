#include "sevenActivity.h"
#include <iostream>

using namespace std;

void SevenActivity::run() {
  Funcionario* funcionario = new Funcionario("3829", "Roberto", 1300.50);
  funcionario->mostrarDados();
}

Funcionario::Funcionario(char* codigo, char* nome, float salario) {
  this->codigo = codigo;
  this->nome = nome;
  this->salario = salario;
}

void Funcionario::mostrarDados() {
  cout << "Codigo: " << codigo << endl;
  cout << "Nome: " << nome << endl;
  cout << "Salario: " << salario << endl;
}