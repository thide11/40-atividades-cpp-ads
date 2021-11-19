#include "twentyActivity.h"
#include "nineteenActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyActivity::run() {
  nineteen::Animal* animal;
  animal = new nineteen::Cachorro();
  animal->emitirSom();
  animal = new nineteen::Cavalo();
  animal->emitirSom();
  animal = new nineteen::Preguica();
  animal->emitirSom();
};