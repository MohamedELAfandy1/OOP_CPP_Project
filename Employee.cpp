#include "employee.h"

int Employee::count = 0;

Employee::Employee() :name("Unknown"), EmpId(-1), salary(0) {
	++count;
}

Employee::Employee(string n, int id, float s) :name(n), EmpId(id), salary(s){
	++count;
}


void Employee::print() const{
	cout << "Name: " << name << ", EmpID: " << EmpId << ", Salary: " << salary << endl;
}

string Employee::getName() {
	return name;
}

int Employee::getCountEmployees() {
	return count;
}



