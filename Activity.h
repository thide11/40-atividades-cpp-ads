#ifndef Activity_HEADER
#define Activity_HEADER

class Activity {
protected: 
	void print(const char* content);
	int input(const char* answer);
	char* strInput(const char* answer);
public:
	char* activityName;
	virtual void run() {};
};

#endif