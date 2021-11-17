#include "thirdActivity.h"

void ThirdActivity::run() {
	long num = input("Digite o numero a ser verificado: ");
	long first = 0;
	long second = 1;
	while (true) {
		int temp = second;
		second = second + first;
		first = temp;
		if (second == num) {
			print("Este numero partence a sequencia de Fibonacci!");
			break;
		}
		if (second > num) {
			print("Este numero nao partence a sequencia de Fibonacci");
			break;
		}
	}
};
