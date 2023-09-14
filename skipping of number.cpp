#include <iostream>
using namespace std;
int main()
{
      int m,n,i,k;
      cout<<"enter the value of M:";
      cin>>m;
      cout<<"enter the value of N:";
      cin>>n;
      cout<<"enter a number to be skipped K:"; 
      cin>>k;
      if(k>0)
      {
      	if(n>=m)
      	{
      		for(i=m;i<=n;i++)
      		{
      			cout<<i<<" ";
      			i=i+k;
			}
		}
		else
		{
			cout<<"invalid input...!";
		}
		return 0;
      }
      	else
		{
			cout<<"invalid input...!";
		}
      return 0;
}
