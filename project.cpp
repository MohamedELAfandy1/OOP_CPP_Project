#include<iostream>
using namespace std;
#include "employee.h"
#include "sales.h"
#include "engineer.h"

int main() {
	Employee* e_ptr;

	Sales s1("ali", 120, 5000, 1000, 0.1);
	Engineer e1("amr", 290, 10000, "IT", 5, 10, 50);

	e_ptr = &s1;
	cout << "Total Salary: " << e_ptr->getTotalSalary() << endl;
	e_ptr->print();
	cout << "===========================\n";

	e_ptr = &e1;
	cout << "Total Salary: " << e_ptr->getTotalSalary() << endl;
	e_ptr->print();
	cout << "===========================\n";

	cout << "Number Of Employees: " << Employee::getCountEmployees() << endl;
	return 0;
}
