#include "sixActivity.h"
#include <iostream>

using namespace std;

void SixActivity::run() {
  print("Resultado de operacoes na conta numero 1 : ");
  Conta* conta = new Conta("423423", "Jorge", 100, 300);
  conta->depositar(100);
  conta->sacar(200);
  conta->depositar(300);
  conta->extrato();
  print("Resultado de operacoes na conta numero 2 : ");
  Conta* conta2 = new Conta("234634", "Rodrigo", 50, 500);
  conta2->depositar(100);
  conta2->sacar(200);
  conta2->sacar(500);
  conta2->extrato();
  print("Resultado de operacoes na conta numero 3 : ");
  Conta* conta3 = new Conta("754334", "Gabriel", 50, 100);
  conta3->depositar(100);
  conta3->sacar(50);
  conta3->extrato();
}

Conta::Conta() {}

Conta::Conta(string anumero, string atitular, int asaldo, int alimite) {
  numero = anumero;
  nome = atitular;
  saldo = asaldo;
  limite = alimite;
}

int Conta::getSaldo() {
  return saldo;
}

void Conta::zerarSaldo() {
  saldo = 0;
}

int Conta::getLimite() {
  return limite;
}

void Conta::depositar(int valor) {
  if ((valor + saldo) > limite) {
    cout << "Depositar extrapola o limite" << endl;
  } else {
    saldo += valor;
  }
}

void Conta::sacar(int valor) {
  if (valor > saldo) {
    cout << "Saldo insuficiente" << endl;
  } else {
    saldo -= valor;
  }
}

void Conta::extrato() {
  cout << "Conta: " << numero << endl;
  cout << "Nome: " << nome << endl;
  cout << "Saldo: " << saldo << endl;
  cout << "Limite: " << limite << endl;
}

