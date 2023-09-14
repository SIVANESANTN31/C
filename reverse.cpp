#include <iostream> 
#include<ctype.h> 
using namespace std;  
int main()  
{  
char n;
int reverse=0, rem;    
cout<<"Enter a number: ";    
cin>>n; 

if(isdigit(n))
{
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 cout<<"Reversed Number: "<<reverse<<endl; 
}
else
{
	cout<<"invalid input";
}
return 0;  
}  
