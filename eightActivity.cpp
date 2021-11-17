#include "eightActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void EightActivity::run() {
  Produto* produto = new Produto(23, "Pera organica", 10.4);
  produto->mostrarDados();
};

Produto::Produto(int codigo, const char* descricao, double preco) {
  this->codigo = codigo;
  this->descricao = descricao;
  this->preco = preco;
}

void Produto::mostrarDados() {
  cout << "Codigo: " << codigo << endl;
  cout << "Descricao: " << descricao << endl;
  cout << "Preco: " << preco << endl;
}