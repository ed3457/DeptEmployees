#include "Department.h"

void Department::setName(string n)
{
    name = n;
}

string Department::getName()
{
    return name;
}

Employee* Department::getEmpList()
{
    return empList;
}

Department::Department(string n, Employee* elist, int numberOfEmployees)
{
    setName(n);

    // deep copy 
    empList = new Employee[numberOfEmployees]; 

    for (int i = 0;i < numberOfEmployees; i++)
    {

        empList[i].setName(elist[i].getName());
        empList[i].setSalary(elist[i].getSalary());

    }
}

Department::~Department()
{
    delete[] empList;
}
