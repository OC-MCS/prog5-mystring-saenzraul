#pragma once
#include <iostream>

using namespace std;
// MyString class declaration goes here
class MyString
{
private:
	char* s;
	int size;
public:
	MyString();
	MyString(const char* input);
	~MyString();
	MyString(const MyString &other); //Copy Constructor
	char* c_str() const;
	MyString operator = (const MyString &other); // = Operator
	MyString operator + (const MyString &other); // + Operator
	bool operator == (const MyString &other); // == Operator
};

ostream &operator << (ostream &s, const MyString &other);