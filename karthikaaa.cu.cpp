#i}nclude <iostream>
using namespace std;
int main()
{
    int a=1,b=5,c=9;
    if (a>b) 
    {
	   if(a>c)
	   cout<<a<<"is largest number";
	   else
	   cout<<c<<"is largest number";
	
   }   
   else 
   {
      if (b>c)
      cout<<b<<"is the laegest number";
      else
      cout<<c<<"is the largest number"; 
  }
  return 0;
}
