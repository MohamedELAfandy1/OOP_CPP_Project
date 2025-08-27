#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
	string name;
	int EmpId;
	float salary;
	static int count;


public:
	Employee();
	Employee(string n, int id, float s);

	virtual float getTotalSalary() const = 0;
	virtual void print() const;

	virtual string getName();


	static int getCountEmployees();
};

