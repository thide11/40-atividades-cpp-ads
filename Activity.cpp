#include "activity.h"
#include <iostream>
#include <string>

using namespace std;

void Activity::printWithoutEndl(const char* content) {
	cout << content;
}

void Activity::print(const char * content) {
	cout << content << endl;
}

int Activity::input(const char* answer) {
	printWithoutEndl(answer);
	int content;
	cin >> content;
	return content;
}

string Activity::strInput(const char* answer) {
	printWithoutEndl(answer);
	std::string userInput;
	cin >> userInput;
	return userInput;
}