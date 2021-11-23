#include "thirtyThreeActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void ThirtyThreeActivity::run() {
  thirty_three::Aluno* aluno1 = new thirty_three::Aluno(1, "Thiago", 20);
  thirty_three::Aluno* aluno2 = new thirty_three::Aluno(4, "Amanda", 19);
  thirty_three::Aluno* aluno3 = new thirty_three::Aluno(2, "Jose", 18);
  thirty_three::Btree* three = new thirty_three::Btree();
  three->insert(aluno1);
  three->insert(aluno2);
  three->insert(aluno3);
  print("Arvore binaria criada e inserida 3 alunos com sucesso! verifique o codigo");
};