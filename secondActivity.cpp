#include "secondActivity.h"
#include <iostream>

using namespace std;

void SecondActivity::run() {
	while(true) {
		string name = strInput("Digite um nome ou tecle FIM: ");
		if (name == "FIM") {
			break;
		}
		int salary = input("Digite seu salário: ");
		float newSalary = calculateNewSalary(salary);
		float diference = newSalary - salary;
		cout << name << " tinha um salário de R$ " << salary << ", com o reajuste, o salário ira ficar de R$ " << newSalary << endl;
		sumOldSalary += salary;
		sumNewSalary += newSalary;
		sumDiference += diference;
	}
	showSums();
};

float SecondActivity::calculateNewSalary(int oldSalary) {
	if (oldSalary >= 150) {
		return oldSalary * 1.25;
	}
	else if (oldSalary <= 300) {
		return oldSalary * 1.20;
	}
	else if (oldSalary <= 600) {
		return oldSalary * 1.15;
	}
	else if (oldSalary > 600) {
		return oldSalary * 1.10;
	}
	return oldSalary;
}

void SecondActivity::showSums() {
	cout << "A soma dos salários antigos é de R$ " << sumOldSalary << endl;
	cout << "A soma dos novos sálarios é de R$ " << sumNewSalary << endl;
	cout << "O reajuste foi de R$ " << sumDiference << endl;
}