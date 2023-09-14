#include<iostream>
#include<math.h>
int reverse(int n)
{
int a;
cout<<"\nReverse output without return type is =";
while(n!=0)
{
a=n%10;
cout<<a;
n=n/10;
}
}
int reverse1(int n)
{
int a,c=0,x,z,b[100],i=0;
while(n!=0)
{
b[i]=n%10;
i++;
x=i;
n=n/10;
}
int y=x-1;
for(i=0; i<=x-1;i++)
{
z=b[i]*pow(10,y);
c=c+z;
y--;
}
return c;
}
int main()
{
int n;
cout<<"\nEnter the number to be reversed \n";
cin>>n;
reverse(n);
cout<<"\nReverse output with return type is ="<<reverse1(n);
return 0;
}
