#include<iostream>
using namespace std;
#include "employees.h"

void employees::set_salary(float sal)
{
	salary = sal;
}

//void employees::set_salary()
//{
//	float  sal;
//	do {
//	/*	cout << "Enter the employee salary  : ";*/
//		cin >> sal;
//		if (sal > 0)
//			salary = sal;
//		else
//			cout << "\n\n\t\t\t\t Enter valid employee salary  : ";
//	} while (sal < 0);
//}

void employees::set_job_Type(string job)
{   
	job_type = job;
}

void employees::set_job_Type()
{
	int x = 1;
	string job;
	do {
		cout << "\n\n\t\t\t\t Enter the job of employee  :";
		cin >> job;
		if ((job == "manager") || (job == "engineer") || (job == "reception") || (job == "pilot") || (job == "co_pilot"))
		{
			job_type = job;
			x = 0;
		}
	} while (x);
}

float employees::get_salary()
{
	return salary;
}

string employees::get_job_Type()
{
	return job_type;
}
