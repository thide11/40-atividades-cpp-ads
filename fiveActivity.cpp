#include "fiveActivity.h"
#include <iostream>

using namespace std;

void FiveActivity::run() {
	int a = input("Digite a quantidade de numeros primos a encontrar: ");
  int found = 0;
  int currentPrimeBruteForce = 1;
  while(found < a) {
    if(isPrime(currentPrimeBruteForce)) {
      cout << currentPrimeBruteForce << " e um numero primo" << endl;
      found++;
    }
    currentPrimeBruteForce++;
  }
};

bool FiveActivity::isPrime(int number) {
  if (number == 1) {
    return false;
  }
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}