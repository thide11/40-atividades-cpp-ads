#include "twentyFiveActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyFiveActivity::run() {
  twenty_five::Empresa* empresa = new twenty_five::Empresa();
  twenty_four::Funcionario* funcionarios[] = {
    new twenty_four::FuncionarioEnsinoBasico(),
    new twenty_four::FuncionarioEnsinoBasico(),
    new twenty_four::FuncionarioEnsinoBasico(),
    new twenty_four::FuncionarioEnsinoBasico(),
    new twenty_four::FuncionarioEnsinoMedio(),
    new twenty_four::FuncionarioEnsinoMedio(),
    new twenty_four::FuncionarioEnsinoMedio(),
    new twenty_four::FuncionarioEnsinoMedio(),
    new twenty_four::FuncionarioGraduacao(),
    new twenty_four::FuncionarioGraduacao(),
  };
  empresa->setFuncionarios(funcionarios);
  cout << "Gasto com salario: " << empresa->calcularGastoComSalario() << endl;
  cout << "Gasto com ensino basico: " << empresa->calcularGastoComSalarioPorCategoria("ensino basico") << endl;
  cout << "Gasto com ensino medio: " << empresa->calcularGastoComSalarioPorCategoria("ensino medio") << endl;
  cout << "Gasto com graduacao: " << empresa->calcularGastoComSalarioPorCategoria("graduacao") << endl;
};