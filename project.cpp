#include<iostream>
using namespace std;

class Employee{
	protected:
	string name;
	int EmpId;
	float salary;
	public:
	Employee():name("Unknown"),EmpId(-1),salary(0){}	
	Employee(string n, int id, float s):name(n),EmpId(id),salary(s){}
	
	virtual float getTotalSalary()=0;

	virtual void print(){
		cout<<"Name: "<<name<<", EmpID: "<<EmpId<<", Salary: "<<salary<<endl;
	}
	
	virtual string getName() final{
		return name;
	}
	
	virtual ~Employee(){
		cout<<"Employee Destroyed "<<name<<endl;
	}	
};

class Sales: public Employee{
	float GrossSales;
	float commesionRate;
	public:
	Sales():GrossSales(0),commesionRate(0){}
	Sales(string n, int id, float s, float gs, float cr): Employee(n, id,s),GrossSales(gs),commesionRate(cr){}
	void setGrossSales(float gs){
		GrossSales=gs;
	}
	void setCommesionRate(float cr){
		commesionRate=cr;
	}
	void print() override{
		Employee::print();
		cout<<"Gross Sales: "<<GrossSales<<", Commesion Rate"<<commesionRate<<endl;
	}
	float getTotalSalary(){
		return (salary+ GrossSales*commesionRate);
	}
		~Sales(){
		cout<<"Sales Destroyed "<<name<<endl;
	}
};


class Engineer: public Employee{
	string speciality;
	int experience;
	int overTimeHours;
	float overTimeHourRate;
	public:
	Engineer():speciality("Unknown"),experience(0),overTimeHours(0),overTimeHourRate(0){	}
	Engineer(string n, int id, float s, string sp, int ex, int ov, float ovr):Employee(n,id,s),speciality(sp),experience(ex),overTimeHours(ov),overTimeHourRate(ovr){	}
	void setOverTimeHours(int ov){
		overTimeHours=ov;
	}
	void setOverTimeHourRate(int ovr){
		overTimeHourRate=ovr;
	}
	
	
	void print(){
		Employee::print();
		cout<<"Speciality: "<<speciality<<", Experience: "<<experience<<", Over Time Hours: "<<overTimeHours<<", Over Time Hour Rate: "<<overTimeHourRate<<endl;
	}
	
	float getTotalSalary(){
		return (salary+overTimeHours*overTimeHourRate);
	}
		~Engineer(){
		cout<<"Engineer Destroyed "<<name<<endl;
	}
};

int main(){
	Employee* e_ptr;
	Sales s1("ali",120,5000,1000,0.1);
	Engineer e1("amr",290,10000,"IT",5,10,50);
	e_ptr=&s1;
	cout<<e_ptr->getTotalSalary()<<endl;
	e_ptr->print();
	
	e_ptr=&e1;
	cout<<e_ptr->getTotalSalary()<<endl;
	e_ptr->print();
	
}
