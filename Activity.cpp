#include "activity.h"
#include <iostream>

using namespace std;

void Activity::print(const char * content) {
	cout << content << endl;
}

int Activity::input(const char* answer) {
	print(answer);
	int content;
	cin >> content;
	return content;
}

char* Activity::strInput(const char* answer) {
	print(answer);
	char* content = (char*) cin.get();
	return content;
}