#pragma once
#include "Employee.h"
class Department
{
private: 
	string name; 
	Employee* empList; 

public:
	void setName(string n);

	string getName();

	Employee* getEmpList();

	Department(string n, Employee* elist, int numberOfEmployees); 
	~Department();
};

