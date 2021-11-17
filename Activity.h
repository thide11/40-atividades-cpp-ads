#pragma once
#include <string>

using namespace std;

class Activity {
private:
	void printWithoutEndl(const char* content);
protected: 
	void print(const char* content);
	int input(const char* answer);
	string strInput(const char* answer);
public:
	virtual const char* getActivityName() { return (char*)""; };
	virtual void run() {};
};