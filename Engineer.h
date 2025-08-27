#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "employee.h"
class Engineer : public Employee {
private:
	string speciality;
	int experience;
	int overTimeHours;
	float overTimeHourRate;
public:
	Engineer();
	Engineer(string n, int id, float s, string sp, int ex, int ov, float ovr);

	void setOverTimeHours(int ov);
	void setOverTimeHourRate(float ovr);


	void print() const;

	float getTotalSalary() const;
};

