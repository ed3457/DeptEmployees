#pragma once
#include <string>
using namespace std; 
class Employee
{
private: 
	string name;
	float salary; 

public:

	void setName(string n);
	string getName();

	void setSalary(float sal);
	float getSalary();

	Employee();
	Employee(string n, float sal); 
	Employee(const Employee& originalCopy);// copy constructor 

};

