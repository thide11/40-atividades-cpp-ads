#include "thirtyOneActivity.h"
#include "thirtyActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void ThirtyOneActivity::run() {
  thirty::Lista* l1 = new thirty::Lista();
  l1->inserir(3);
  l1->inserir(1);
  l1->inserir(20);
  l1->inserir(4);
  l1->inserir(9);
  l1->inserir(1);
  l1->inserir(5);
  l1->inserir(5);
  l1->inserir(5);
  thirty::Lista* l2 = new thirty::Lista();
  print("Adicionado l1 em l2 sem elementos repetidos..");
  for (int i = 0; i < l1->pegarTamanho(); i++) {
    int valorAProcurar = l1->pegarIndex(i);
    if(l2->procurar(valorAProcurar) == -1) {
      l2->inserir(valorAProcurar);
    }
  }
  print("Conteudo de l2..");
  l2->exibir();
  l2->esvaziar();
  print("Invertendo l1 e colocando em l2..");
  for (int i = l1->pegarTamanho()-1; i >= 0; i--) {
    l2->inserir(
      l1->pegarIndex(i)
    );
  }
  print("Conteudo de l2:");
  l2->exibir();
  bool remocaoFoiUmSucesso = false;
  print("Removendo numero 5 de l1..");
  do {
    remocaoFoiUmSucesso = l1->remover(5);
  } while(remocaoFoiUmSucesso);

  print("Conteudo de l1:");
  l1->exibir();
  
  print("Imprimindo elemento que mais se repete e menos se repete de l2:");
  thirty_one::ListaParser* listaParser = new thirty_one::ListaParser(l2);
  listaParser->imprimirElementosExtremos();
}