#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
protected:
	char name[20];
	int id;
public:
	void get_emp(int c,char *s)
	{
		id=c;
		strcpy(name,s);
		
	}
	void put_emp()
	{
		cout<<"\nCode : "<<id;
		cout<<"\nName : "<<name;
	}
};

class salary : public virtual employee
{
protected:
	float sal;
public:
	void get_sal(float s)
	{
		sal=s;
	}
	void put_sal()
	{
		cout<<"\n Basic salary : "<<sal;
	}
};

class gross : public virtual employee
{
protected:
	int gross,basic;
	int allowance=1500;
    double hra, da, pf;
public:
	void get_gross(int basic)
	{
		hra = 0.2 * basic;
        da = 0.5 * basic;
        pf = 0.11 * basic;
	    gross = round(basic + hra + da + allowance - pf)	;
	}
	void put_gross()
	{
		cout<<"\n Gross : "<<gross;
	}
};

class master : public account,public admin
{
public:
	void display()
	{
		put_emp();
		put_sal();
		put_gross();
	}
};

int main()
{
	master E1;

	p1.get_emp(111,"shiva");
	p1.get_sal(10000);
	p1.get_gross(10000);
	p1.display();

	getch();
	return 0;
}
