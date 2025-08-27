#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "employee.h"

class Sales : public Employee {
private:
	float GrossSales;
	float commesionRate;
public:
	Sales();
	Sales(string n, int id, float s,float gs, float cr);

	void setGrossSales(float gs);
	void setCommesionRate(float cr);

	void print() const;
	float getTotalSalary() const;
};

