#include "firstActivity.h"
#include <iostream>
#include <sstream>

void FirstActivity::run() {
	int a = input("Digite um valor: ");
	int b = input("Digite outro valor: ");
	for (int i = a; i < b; i++) {
		if (i % 2 == 1) {
			std::cout << i << " é um numero impar" << std::endl;
		}
	}
};
