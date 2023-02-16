// DeptEmployees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Department.h"

int main()
{
   // creation of a list of employees 
	int deptSize = 2;
	Employee* elist = new Employee[deptSize];
	// init the list 
	string name;
	float sal;
	for (int i = 0;i < deptSize;i++)
	{ 
		cin >> name;
		cin >> sal;
	
		elist[i].setName(name);
		elist[i].setSalary(sal);

	}

	Department HR("HR", elist);


	float salSum = 0;

	Employee* tempList = HR.getEmpList();
	for (int i = 0;i < deptSize; i++)
	{

		salSum += tempList[i].getSalary();

	}

	float avg = salSum / deptSize;
	cout << avg;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
