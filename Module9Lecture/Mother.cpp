#include "Mother.h"

void Mother::setLastName(string newLast)
{
	strLastName = newLast;
}

void Mother::setFirstName(string newFirst)
{
	strFirstName = newFirst;
}

string Mother::getFirstName()
{
	return strFirstName;
}

string Mother::getLastName()
{
	return strLastName;
}

void Mother::ShowMyName()
{
	cout  << strFirstName << " " << strLastName;	
}

Mother::Mother()	//Mother's Constructor
{
	cout << "\nMother's Constructor says 'Hi!'" << endl;
}

Mother::~Mother()	//Mother's DeConstructor
{
	cout << "\nMother's DeConstructor says 'Goodbye!'" << endl;
}
