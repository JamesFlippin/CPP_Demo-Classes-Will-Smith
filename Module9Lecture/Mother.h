#ifndef MOTHER__H
#define MOTHER__H
#include <iostream>
#include <string>

using namespace std;

class Mother
{
private: 

protected:
	//Variables
	string strFirstName = "Jada";
	string strLastName = "Smith";

public:
	void setLastName(string);
	void setFirstName(string);
	string getFirstName();
	string getLastName();

	//Functions
	void ShowMyName();
	Mother();
	~Mother();
};

#endif // !MOTHER__H