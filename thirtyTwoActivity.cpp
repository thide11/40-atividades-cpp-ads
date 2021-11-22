#include "thirtyTwoActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void ThirtyTwoActivity::run() {
  thirty_two::ListaOrdenada* lista = new thirty_two::ListaOrdenada();
  print("Inserindo elementos em forma aleatoria");
  lista->inserir(10);
  lista->inserir(4);
  lista->inserir(7);
  lista->inserir(20);
  lista->inserir(30);
  lista->inserir(15);
  lista->inserir(1);
  print("Lista final ordenada automaticamente:");
  lista->imprimir();
};