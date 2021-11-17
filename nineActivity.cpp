#include "nineActivity.h"
#include <iostream>

using namespace std;

void NineActivity::run() {
  print("Resultado de operacoes na conta numero 1 : ");
  ContaComTransferencia* conta = new ContaComTransferencia("423423", "Jorge", 100, 400);
  conta->depositar(100);
  conta->sacar(200);
  conta->depositar(300);
  conta->extrato();
  print("Transferindo o jorge... para a conta jorge2");
  ContaComTransferencia* conta2 = new ContaComTransferencia("23523", "Jorge2", 50, 300);
  conta2->extrato();
  print("Importanto conta...");
  conta2->importarConta(conta);
  conta2->extrato();
}

ContaComTransferencia::ContaComTransferencia() {}

ContaComTransferencia::ContaComTransferencia(char* anumero, char* atitular, int asaldo, int alimite) {
  this->numero = anumero;
  this->nome = atitular;
  this->saldo = asaldo;
  this->limite = alimite;
}

void ContaComTransferencia::importarConta(Conta* conta) {
  this->saldo += conta->getSaldo();
  conta->zerarSaldo();
  if(conta->getLimite() > limite) {
    limite = conta->getLimite();
  }
}