#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setSalary(float sal)
{
	salary = sal;
}

float Employee::getSalary()
{
	return salary;
}

Employee::Employee():Employee("not-set yet",1000)
{
	/*setName("not-set yet");
	setSalary(1000);*/
}

Employee::Employee(string n, float sal)
{   
	setName(n);
	setSalary(sal);

}
