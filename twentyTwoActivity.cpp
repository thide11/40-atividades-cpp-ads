#include "twentyTwoActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyTwoActivity::run() {
  nineteen::Animal* animais[10] = {
    new nineteen::Cachorro(),
    new nineteen::Cavalo(),
    new nineteen::Preguica(),
    new nineteen::Cachorro(),
    new nineteen::Cavalo(),
    new nineteen::Preguica(),
    new nineteen::Cachorro(),
    new nineteen::Cavalo(),
    new nineteen::Preguica(),
    new nineteen::Cachorro(),
  };
  twenty_two::Zoologico* zoo = new twenty_two::Zoologico();
  print("Colocando animais no zoologico...");
  zoo->setAnimais(animais);
  print("Percorrendo jaulas dos animais..");
  zoo->percorrerJaulas();
};