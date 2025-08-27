#include "sales.h"

Sales::Sales() :GrossSales(0), commesionRate(0) {}

Sales::Sales(string n, int id, float s, float gs, float cr) : Employee(n, id, s), GrossSales(gs), commesionRate(cr) {}

void Sales::setGrossSales(float gs) {
	GrossSales = gs;
}

void Sales::setCommesionRate(float cr) {
	commesionRate = cr;
}

void Sales::print() const {
	Employee::print();
	cout << "Gross Sales: " << GrossSales << ", Commesion Rate" << commesionRate << endl;
}

float Sales::getTotalSalary() const {
	return (salary + GrossSales * commesionRate);
}

