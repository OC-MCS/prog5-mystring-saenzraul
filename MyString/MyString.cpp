// MyString implementation file
#include <iostream>
#include"MyString.h"

using namespace std;


MyString::MyString() {

	s = nullptr;

}

MyString::MyString(const char* input) {

	int size = strlen(input) + 1;

	s = new char[size];

	strcpy_s(s, size, input);

}

MyString::~MyString() {
	cout << "In the Destructor" << endl;
	delete[] s;
}

MyString::MyString(const MyString &other) {

	cout << "In the Copy Constructor " << endl;

	if (other.s == nullptr)

	{

		s = nullptr;

	}

	else

	{

		int size = strlen(other.s) + 1;

		s = new char[size];

		strcpy_s(s, size, other.s);

	}



}

char* MyString::c_str() const

{

	return s;

}

MyString MyString::operator = (const MyString &other)

{

	if (other.s == nullptr)

	{

		s = nullptr;

	}

	else
	{
		int size = strlen(other.s) + 1;

		if (this != &other)

		{

			delete[] s;

			s = new char[size];

			strcpy_s(s, size, other.s);

		}

	}



	return *this;

}

MyString MyString::operator + (const MyString &other)

{

	MyString temp;

	int size = strlen(other.s) + strlen(s) + 1;

	temp.s = new char[size];

	strcpy_s(temp.s, size, s);

	strcat_s(temp.s, size, other.s);

	strcat_s(temp.s, size, "\0");

	return temp;

}

ostream &operator << (ostream &s, const MyString &other)

{

	if (other.c_str() == nullptr)

	{

		cout << "\0";

	}

	else

	{

		s << other.c_str();

	}



	return s;

}

bool MyString::operator == (const MyString &other) {
	bool isEqual;

	if (strcmp(s, other.c_str()) == 0)

	{

		isEqual = true;

	}

	else

		isEqual = false;



	return isEqual;
}

