//=====================================================
// Raul Saenz
// March 1 ,2019
// Programming Assignment #5
// Description: MyString
//=====================================================

#include<iostream>
#include "MyString.h"

using namespace std;

int main() {

	cout << "Test Case 1: \n";
	MyString string1;
	MyString string2("string2");
	string1 = string2;
	cout << "Assigning string2: " << string2 << " to String1: " << string1 << endl;


	cout << "\n Test Case 2: \n";
	MyString string3;
	string3 = string1 = string2;
	cout << "All 3 strings should have string2 in them. \n";
	cout << "String1: " << string1 << endl;
	cout << "String2: " << string2 << endl;
	cout << "String3: " << string3 << endl;


	cout << "\n Test Case 3: \n";
	string1 = "Hello";
	string2 = " World";
	string3 = string1 + string2;
	cout << "Assigning string3: " << string3 << " to string1: " << string1 << " + string2 " << string2 << endl;


	cout << "\n Test Case 4: \n";
	cout << "Is string1 and string2 equal to each other?\n";
	cout << "String 1: " << string1 << endl;
	cout << "String 2: " << string2 << endl;
	if (string1 == string2)
	{
		cout << "string1 is equal to string2 \n";
	}
	else
	{
		cout << "They are not equal \n";
	}

	string1 = "ECE RULES!";
	string2 = "ECE RULES!";

	cout << "Is string1 and string2 equal to each other?\n";
	cout << "String 1: " << string1 << endl;
	cout << "String 2: " << string2 << endl;
	if (string1 == string2)
	{
		cout << "string1 is equal to string2 \n";
	}
	else
	{
		cout << "They are not equal \n";
	}



	

	return 0;
}