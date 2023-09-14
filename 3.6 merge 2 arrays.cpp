#include <stdio.h>
int main()
{
 
 int n1,n2,n3; //Array Size Declaration
 printf("\nEnter the size of first array ");
 scanf("%d",&n1);
 printf("\nEnter the size of second array ");
 scanf("%d",&n2);
 
 n3=n1+n2;
 printf("\nEnter the first array elements");
 int a[n1],b[n2],c[n3]; //Array Declaration
 for(int i=0;i<n1;i++) //Array Initialized
 {
 scanf("%d",&a[i]);
 c[i]=a[i];
 }
 int k=n1;
 printf("\nEnter the second array elements");
 for(int i=0;i<n2;i++) //Array Initialized
 {
 scanf("%d",&b[i]);
 c[k]=b[i];
 k++;
 }
 printf("\nThe merged array..\n");
 for(int i=0;i<n3;i++)
 printf("%d ",c[i]); //Print the merged array
 
 return 0; 
}
