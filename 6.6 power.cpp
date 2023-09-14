#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main()
{
    int x,n;
    int result;
 
    printf("Enter the value of x: ");
    scanf("%d",&x);
 
    printf("Enter the value of n: ");
    scanf("%d",&n);
     
    result =pow((double)x,n);
 
    printf("%d to the power of %d is= %d \n", x,n, result);
    {
    printf("the add of x,n is:%d\n",x+n);
    printf("the sub of x,n is:%d\n",x-n);
	printf("the mul of x,n is:%d\n",x*n);
	printf("the div of x,n is:%d\n",x/n);
    }
    getch();
    return 0;
}
