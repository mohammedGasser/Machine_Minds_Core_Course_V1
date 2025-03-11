#include <string>
#include <iostream>
using namespace std;

#ifndef Inheritance
#define Inheritance


///////we can use Overriding concept ,virtual concept


class Inheritance_Parent_Base_Person {

public :

//the constructor of parent without you allow it to work
	Inheritance_Parent_Base_Person();
	string name;
	int age ;
   // string  depart;
	///you can use string in enum by switch cases

	enum  Academic_specialization {
		computer=50,
		architecture,
		civil,

	};
	Academic_specialization depart;
///to set or get an enum you have to make an object from enum
//another solution
//	enum  class Academic_specialization {
//			computer=50,
//			architecture,
//			civil,
//
//		};
//		Academic_specialization depart;
	//Academic_specialization depart;


	enum gender{
		male,
		female
	};
	gender gender;
	void set_name(string Name);
	string get_name(void);
	void set_age(int age);
	int get_age(void);

	void set_Academic_specialization(Academic_specialization a);
	string get_Academic_specialization(void);

};




class Inheritance_Chiled_Derived_student:public Inheritance_Parent_Base_Person
{
public:
	float GPA;
 void set_GPA(float gpa);
 float Set_GPA(void);
};


#endif

