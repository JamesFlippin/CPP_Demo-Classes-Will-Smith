#include "Children.h"

void Children::ShowFullName()	//A new function not found in the Base Class (Mother)
{
	//Notice to use the last name variable from the Base Class in the derived class (Children)
	//we have to provide the CLASSNAME and the Scope operator. Mother:: 
	cout << "\n\tOverridden: " << strFirstName << " " << strMiddleName << " " << strLastName;
	cout << "\n\tBase Class: " << strFirstName << " " << strMiddleName << " " << Mother::strLastName;
	if (strLastName == "")
	{
		strLastName = Mother::strLastName;
		cout << "\n\tLast Name Assigned from Base Class: " << strFirstName << " " << strMiddleName << " " << strLastName;
	}
	else
	{
		cout << "\n\tLast Name used from Childen Class: " << strFirstName << " " << strMiddleName << " " << strLastName;
	}
}
//void Children::ShowMyName() //Demo to show overriding a base class function
//{
//	ShowFullName();
//}

Children::Children()	//Children's Constructor
{
	cout << "\n---Children's Constructor says 'Hi!'" << endl;
}

Children::~Children()	//Children's DeConstructor
{
	cout << "\n---Children's DeConstructor says 'Goodbye!'" << endl;
}
