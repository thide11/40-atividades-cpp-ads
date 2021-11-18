#include "thirteenActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void ThirteenActivity::run() {
  print("Funcionario 1:");
  Funcionario2* funcionario = new Funcionario2("Jefferson", 3000, "Programador");
  funcionario->exibeDados();
  print("Funcionario 2:");
  Funcionario2* funcionario2 = new Funcionario2("Carol", 700, "Estágiario");
  funcionario2->exibeDados();
  print("Funcionario 3:");
  Funcionario2* funcionario3 = new Funcionario2("Jackson", 2000, "Suporte");
  funcionario3->setSalario(2200);
  funcionario3->exibeDados();
};

Funcionario2::Funcionario2(string nome, float salario, string cargo) {
  this->nome = nome;
  this->salario = salario;
  this->cargo = cargo;
}

Funcionario2::Funcionario2() {};

string Funcionario2::getNome() {
  return nome;
}

void Funcionario2::setNome(string nome) {
  this->nome = nome;
}

float Funcionario2::getSalario() {
  return salario;
}

void Funcionario2::setSalario(float salario) {
  this->salario = salario;
}

string Funcionario2::getCargo() {
  return cargo;
}

void Funcionario2::setCargo(string cargo) {
  this->cargo = cargo;
}

float Funcionario2::calcularSalarioComReajuste() {
  if(salario >= 2000) {
    return salario * 1.15;
  } else {
    return salario * 1.20;
  }
}

void Funcionario2::exibeDados() {
  cout << "Nome: " << nome << endl;
  cout << "Salario: " << salario << endl;
  cout << "Cargo: " << cargo << endl;
  cout << "Novo salario : " << calcularSalarioComReajuste() << endl;
}