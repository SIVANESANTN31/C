#include<iostream>
using namespace std;
int main ()
{
    int  a,x,i = 1, j, r;
    float n;
    char arr[50];
    cout << " Enter a decimal number : ";
    cin >> n;
    if (n == int(n)){
      a=n;
      while(a!=0) {
      r = a % 16;
      if(r < 10) {
         arr[i] = r + 48;
         i++;
      } 
	  else {
         arr[i] = r + 55;
         i++;
      }
      n = n/16;
     }
  }
      else{
        n= n*4294967296 ;
        a=n;
      while(a!=0) {
      r = a % 16;
      if(r < 10) {
         arr[i] = r + 48;
         i++;
      } 
	  else {
         arr[i] = r + 55;
         i++;
      }
      n = n/16;
      }
      	
   }
    cout << "\nHexadecimal value is : ";
    for (j = i; j > 0; j--)
        cout << arr[j];
    return 0;
}
