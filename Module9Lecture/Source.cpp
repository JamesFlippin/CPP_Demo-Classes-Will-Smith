//*****************************************************************************************
//ITSE 1307 C++
//Class Demo Code: Module 9, Example 1
//Instructor: James Flippin
//Discussion:
//		  This example uses a base Class (Mother) and a derived Class (Children)
//        The Children class inherits two variables (first and last name)
//		  and one function from the Base class
//		  The Children class overrides one of the variables (first name)
//		  The Children class has a new function (ShowFullName) that uses the overridden
//		  First Name, a new variable (in Children class) for the middle name and 
//		  the derived last name from the Mother Class
//*****************************************************************************************
#include "Mother.h"	//Included only to show how the base class itself works
#include "Children.h"	//Derived Class based on the Mother Class

int main()
{
	cout << "Watch as the Constructor for our Base Class (Mother) executes" << endl << endl;
	Mother Mom;			//Mother is the Base Class from which the Children Class will inherit
	system("pause");	//Pause our display 
	system("cls");		//Clear the screen before we go on
	cout << "As we enter the program, notice the order in which the Constructors occur..." << endl;
	cout << "The Base Class will Construct first, then the Children (Derived Class)" << endl;
	system("pause");	//Pause our display 

	//*****************************************************************************************
	Children Child1;	//First Child derived from the Mother Class
	Children Child2;	//Second Child derived from the Mother Class
	system("pause");	//Pause our display 
	system("cls");		//Clear the screen before we go on
	//*****************************************************************************************
	
	//*****************************************************************************************
	//Show our Base Class in action, by itself
	Mom.ShowMyName();	//Base Class: Show the values for the first and last name
	cout << " is the mother of: " << endl;
	//*****************************************************************************************

	//*****************************************************************************************
	//Now let's use the first object based on the derived class 'Children'
	Child1.strMiddleName = "Christopher Syre";
	//Child1.strFirstName = "Jaden";	//Child 
	Child1.setFirstName("Jaden");
	Child1.strLastName = "Smith";	//Base Class Overriden: Assigned to Children classes strLastName

	cout << "---"; Child1.ShowMyName(); cout << endl;
	cout << "\t---Full Name: "; Child1.ShowFullName(); cout << endl;
	//*****************************************************************************************

	//*****************************************************************************************
	//Now let's use the second object based on the derived class 'Children'
	Child2.strMiddleName = "Camille Reign";
	Child2.setFirstName("Willow");
	Child2.strLastName = "Jones";	//Using the Children Class, we override the Last Name from the Base Class

	cout << "---"; Child2.ShowMyName(); cout << endl;
	cout << "\t---Full Name: "; Child2.ShowFullName(); cout << endl;
	//*****************************************************************************************
	
	//*****************************************************************************************
	//Even though Children is derived from the Mother class, the Mother Class itself is unchanged
	cout << "Even though we inherit the Mother Class, \nMom's Name hasn't changed in the base Class: ";
	Mom.ShowMyName(); cout << endl;
	
	system("pause");	//Pause our display 
	system("cls");		//Clear our screen before we go on
	//*****************************************************************************************

	//*****************************************************************************************
	cout << "As we exit the program, notice the order in which the Deconstructors occur..." << endl;
	cout << "The Child Class will Deconstruct first, then the Mother (Base Class)" << endl; 
	system("pause");	//Pause our display 
	//*****************************************************************************************

	return 0;
}