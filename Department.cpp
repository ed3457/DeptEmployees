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

Department::Department(string n, Employee* elist)
{
    setName(n);

    empList = elist; // shallow copy 

}

Department::~Department()
{
    delete[] empList;
}
