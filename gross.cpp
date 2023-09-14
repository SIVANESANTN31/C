#include<iostream>
#include<string>

using namespace std;

class Employee
{
	string name;
	int emp_id;
	double basic_sal;
protected:
	Employee(string _name,int _emp_id, double _basic_sal)
	:name(_name), emp_id(_emp_id), basic_sal(_basic_sal){}
	void DisplayEmployee()
	{
		cout << "\nName of employee is " << name
			<< "\nEmployee ID of employee is " << emp_id
			<< "\nBasic salary of employee is " << basic_sal;
	}
	double GetSalary() { return basic_sal; }
};


class Calculate:public Employee
{
	double gross_pay;
	double net_pay;
public:
	Calculate(string _name,	int _emp_id, double _basic_sal)
	:gross_pay(0), net_pay(0),Employee(_name, _emp_id, _basic_sal){}
	void CalculateGross()
	{
		float suppl;
		cout << " enter salary supplements (from 1 to 40): ";
		cin >> suppl;
		gross_pay = suppl*GetSalary()+GetSalary();
	}
	void CalculateNet()
	{
		float taxes;
		cout << "enter share of taxes (from 1 to 40): ";
		cin >> taxes;
		net_pay = gross_pay-(gross_pay*taxes / 100);
	}
	void Display()
	{
		DisplayEmployee();
		cout << "\nGross salary is " << gross_pay
			<< "\nNet pay is " << net_pay;
	}
};

int main()
{
	Calculate a("Jack", 1234, 3000);
	a.CalculateGross();
	a.CalculateNet();
	a.Display();
}
