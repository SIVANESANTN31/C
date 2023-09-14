#include<iostream>
using namespace std;
inline double add(double x, double y)
{
return x+y;
}
inline double division(double x, double y)
{

return x/y;
}
inline double difference(double x, double y)
{
return x-y;
}
inline double mod(long int x, long int y)
{
return x%y;
}
inline double multiplication(double x, double y)
{
return x*y;
}
int main()
{
char x,y;
cout<<"Enter first value :";
cin>>x;
cout<<"Enter second value :";
cin>>y;
if(isdigit(char x,char y))
{
cout<<"\n Arithmetic operation only processed in numberical values......!";
cout<<"\n Addition of "<<x<<"and "<<y<<" = "<<add(x,y)<<"\n";
cout<<"\n Subtraction between "<<x<<" and "<<y<<" = "<<difference(x,y)<<"\n";
cout<<"\n Division of "<<x<<" and"<<y<<" = "<<division(x,y)<<"\n";
cout<<"\n Modulus of "<<x<<" and "<<y<<" = "<<mod(x,y)<<"\n";
cout<<"\n Multiplication of "<<x<<" and "<<y<<" = "<<multiplication(x,y)<<"\n";
}
else
cout<<"invalid input....!";
return 0;
}

