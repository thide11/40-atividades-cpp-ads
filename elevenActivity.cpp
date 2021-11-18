#include "elevenActivity.h"
#include <iostream>
#include <sstream>

using namespace std;

void ElevenActivity::run() {
  print("Retangulo 1:");
  Retangulo* retangulo1 = new Retangulo(10, 20);
  retangulo1->exibirDados();
  print("Retangulo 2:");
  Retangulo *retangulo2 = new Retangulo();
  retangulo2->setBase(2);
  retangulo2->setAltura(30);
  retangulo2->exibirDados();
  print("Retangulo 3:");
  Retangulo *retangulo3 = new Retangulo(40, 50);
  retangulo3->setBase(10);
  retangulo3->exibirDados();
};

Retangulo::Retangulo() {};

Retangulo::Retangulo(int bas, int alt) {
  this->bas = bas;
  this->alt = alt;
};

int Retangulo::getBase() {
  return bas;
};

int Retangulo::getAltura() {
  return alt;
};

void Retangulo::setBase(int bas) {
  this->bas = bas;
};

void Retangulo::setAltura(int alt) {
  this->alt = alt;
};

int Retangulo::calcularArea() {
  return bas * alt;
};

int Retangulo::calcularPerimetro() {
  return (bas * 2) + (alt * 2);
};

void Retangulo::exibirDados() {
  cout << "Base: " << bas << endl;
  cout << "Altura: " << alt << endl;
  cout << "Area: " << calcularArea() << endl;
  cout << "Perimetro: " << calcularPerimetro() << endl;
};