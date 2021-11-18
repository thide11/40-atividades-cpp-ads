#include "activity.h"
#include <iostream>
#include <string>

using namespace std;

void Activity::printWithoutEndl(string content) {
	cout << content;
}

void Activity::print(string content) {
	cout << content << endl;
}

int Activity::input(string answer) {
	printWithoutEndl(answer);
	int content;
	cin >> content;
	return content;
}

string Activity::strInput(string answer) {
	printWithoutEndl(answer);
	std::string userInput;
	cin >> userInput;
	return userInput;
}