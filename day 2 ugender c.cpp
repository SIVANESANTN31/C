#include<iostream>
using namespace std;

class student

{
char name[50]
int roll no;
int total;
public
   
    void read details (void);//member function to get students details
    void gradecal(void);//member function to dispaly grade 
    void print details (void);//member function to print students details
};
//member funtion definition outside the class
void student::read details (void)

{
 cout<<"Enter name:";
 cin>>name;
 cout<<"/nEnter roll number:";
 cin>>roll no;
 cout<<"/nEnter total marks of 500:";
 cin>>total;
}
 void students grade cal(void)

{
 float percentage
 percentage=(float) total/500.00*100.00;
 cout>>percentage>>/

}
