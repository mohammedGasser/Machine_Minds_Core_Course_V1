#include <string>
#include <iostream>
using namespace std;
#ifndef Multible_Inheritance
#define Multible_Inheritance

//we need to make two or more class(base class)
//to inherit there attributes and methods (functions)
//and see the ambiguous concept

class partner1{
public:
	partner1();
	string name;
	string specific;
	int age;
	void set_name(string n)
	{
		name=n;
	}

	void set_specific(string s)
	{
		specific=s;
	}

	void set_age(int a)
	{
		age=a;
	}

};

class partner2{
public:
	partner2();
	string name;
	string specific;
	int age;
	void set_name(string n)
	{
		name=n;
	}
	void set_specific(string s)
	{
		specific=s;
	}

	void set_age(int a)
	{
		age=a;
	}

};


class company:public partner1,public partner2{
public:
	company();

	void display(void)
	{
///this case is ambiguous because you dont defined
/// which class you use its variable
///		cout<<name<<age<<specific;

		cout<<partner1::name<<partner2::name;
	}

};






#endif




