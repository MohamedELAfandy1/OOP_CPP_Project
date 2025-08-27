#include "engineer.h"

Engineer::Engineer() :speciality("Unknown"), experience(0), overTimeHours(0), overTimeHourRate(0) {}
Engineer::Engineer(string n, int id, float s, string sp, int ex, int ov, float ovr) :Employee(n, id, s), speciality(sp), experience(ex), overTimeHours(ov), overTimeHourRate(ovr) {}

void Engineer::setOverTimeHours(int ov) {
	overTimeHours = ov;
}

void Engineer::setOverTimeHourRate(float ovr) {
	overTimeHourRate = ovr;
}

void Engineer::print() const {
	Employee::print();
	cout << "Speciality: " << speciality << ", Experience: " << experience << ", Over Time Hours: " << overTimeHours << ", Over Time Hour Rate: " << overTimeHourRate << endl;
}

float Engineer::getTotalSalary() const {
	return (salary + overTimeHours * overTimeHourRate);
}

