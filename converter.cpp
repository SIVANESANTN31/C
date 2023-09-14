#include<iostream>
using namespace std;
int main ()
{
    int  y,x,i = 1, j, r;
    char n;
    char arr[100];
    cout << " Enter a decimal number : ";
    cin >> n;
    cout<<"Enter 1 if int or else 2 for float : ";
    cin>>y;
    switch(y){
    	case 1:
    		{x= n;
             while (x != 0)
             {
              r = x % 16;
              if (r < 10)
                 arr[i++] = r + 48;
              else
                 arr[i++] = r + 55;
              x = x / 16;
             }
               cout << "\nHexadecimal value is : ";
              for (j = i; j > 0; j--){
			
                  cout << arr[j];
              }break;
            }   
        case 2:
        	{ n= n*4294967296 ;
			x= n;
             while (x != 0)
             {
              r = x % 16;
              if (r < 10)
                 arr[i++] = r + 48;
              else
                 arr[i++] = r + 55;
              x = x / 16;
             }
               cout << "\nHexadecimal value is : ";
              for (j = i; j > 0; j--){
                  cout << arr[j];
              }break;
        	}
	   }
	   return 0;
	}
