#ifndef CHILDREN__H
#define CHILDREN__H
#include "Mother.h"

class Children: public Mother
{
public:
	//string strFirstName = "";
	string strLastName = "";	//Overrides the base class value for Last Name
	string strMiddleName = "";	//Variable that does not exist in the Base Class

	void ShowFullName();
	//void ShowMyName();	//Demo to show overriding a base class function

	Children();
	~Children();
};

#endif // !CHILDREN__H