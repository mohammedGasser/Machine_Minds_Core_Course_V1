
#include "../Header_Files/Inheritance.h"



void Inheritance_Parent_Base_Person::set_name(string Name)
{
	name=Name;
}
string Inheritance_Parent_Base_Person::get_name(void){

	return name;

}

string Inheritance_Parent_Base_Person::get_Academic_specialization(void)
{
  string a;
	switch(depart)
	{
	case (Inheritance_Parent_Base_Person::computer):a= "computer";break;
	case (Inheritance_Parent_Base_Person::architecture):a="architecture";break;
	case (Inheritance_Parent_Base_Person::civil):a="civil";break;
	default:a="Not of them";break;
	}
return a;
}
void Inheritance_Parent_Base_Person::set_Academic_specialization(Academic_specialization a)
{


	depart=a;



}


void Inheritance_Parent_Base_Person::set_age(int age_)
{
	age=age_;
}



void Inheritance_Chiled_Derived_student::set_GPA(float gpa){

	GPA=gpa;
}

Inheritance_Parent_Base_Person::Inheritance_Parent_Base_Person()
{

cout <<"Hello Inheritane";
Inheritance_Parent_Base_Person::age=30;
Inheritance_Parent_Base_Person::name="Islam";
Inheritance_Parent_Base_Person::depart=computer;
Inheritance_Parent_Base_Person::gender=male;


}
