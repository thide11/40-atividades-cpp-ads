#include "twentyNineActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyNineActivity::run() {
  twenty_nine::Empresa* empresa = new twenty_nine::Empresa();
  twenty_nine::Funcionario* funcionarios[] = {
    (new twenty_nine::FuncionarioEnsinoBasico("Alberto"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoBasico("Simara"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoBasico("Daniel"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoBasico("Gabriel"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoMedio("Fernando"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoMedio("Lucas"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoMedio("Thiago"))->setComissao(new twenty_six::Vendedor()),
    (new twenty_nine::FuncionarioEnsinoMedio("Wagner"))->setComissao(new twenty_six::Supervisor()),
    (new twenty_nine::FuncionarioGraduacao("Abner"))->setComissao(new twenty_six::Supervisor()),
    (new twenty_nine::FuncionarioGraduacao("Simone"))->setComissao(new twenty_six::Gerente()),
  };
  for(twenty_nine::Funcionario* funcionario : funcionarios) {
    cout << funcionario->toString() << endl;
  }
};