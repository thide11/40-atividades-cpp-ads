#pragma once
#include <string>

using namespace std;

class Activity {
private:
	void printWithoutEndl(string content);
protected: 
	void print(string content);
	int input(string answer);
	string strInput(string answer);
public:
	virtual string getActivityName() = 0;
	virtual void run() = 0;
};