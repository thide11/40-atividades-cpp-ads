#include "twentyEightActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyEightActivity::run() {
  twenty_eight::Empresa* empresa = new twenty_eight::Empresa();
  twenty_seven::Funcionario* funcionarios[] = {
    (new twenty_seven::FuncionarioEnsinoBasico())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoBasico())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoBasico())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoBasico())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoMedio())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoMedio())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoMedio())->setComissao(new twenty_six::Vendedor()),
    (new twenty_seven::FuncionarioEnsinoMedio())->setComissao(new twenty_six::Supervisor()),
    (new twenty_seven::FuncionarioGraduacao())->setComissao(new twenty_six::Supervisor()),
    (new twenty_seven::FuncionarioGraduacao())->setComissao(new twenty_six::Gerente()),
  };
  empresa->setFuncionarios(funcionarios);
  cout << "Gasto com salario: " << empresa->calcularGastoComSalario() << endl;
  cout << "Gasto com ensino basico: " << empresa->calcularGastoComSalarioPorCategoria("ensino basico") << endl;
  cout << "Gasto com ensino medio: " << empresa->calcularGastoComSalarioPorCategoria("ensino medio") << endl;
  cout << "Gasto com graduacao: " << empresa->calcularGastoComSalarioPorCategoria("graduacao") << endl;
};