#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[100];
    int n,i,oddSum=0,evenSum=0;
    cout<<"Enter the no elements to be get:";
    cin>>n;
    cout<<"Enter the elements:\n";
    for(i=1;i<=n;i++)
    {
    	cin>>arr[i];
	}
    for(i=0; i<n; i++){
        if(arr[i]%2==0){
        evenSum=evenSum+arr[i];
        }
    else{
             oddSum=oddSum+arr[i];
        }
    }
    cout<<"The sum of odd numbers are:"<<oddSum;
    cout<<"\nThe sum of even numbers are:"<<evenSum;
    getch();
    return 0;
}
