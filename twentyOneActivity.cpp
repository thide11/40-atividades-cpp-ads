#include "twentyOneActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void TwentyOneActivity::run() {
  nineteen::Cachorro* cachorro = new nineteen::Cachorro();
  nineteen::Cavalo* cavalo = new nineteen::Cavalo();
  nineteen::Preguica* preguica = new nineteen::Preguica();
  print("Criando veterinario");
  twenty_one::Veterinario* veterinario = new twenty_one::Veterinario();
  print("Examinando cachorro");
  veterinario->examinar(cachorro);
  print("Examinando cavalo");
  veterinario->examinar(cavalo);
  print("Examinando preguica");
  veterinario->examinar(preguica);
};