#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	int x;
	x=sum();
	printf("the sum of the numbers you entered is %d",x);
	getch();
}
int sum()
{
	int a,b;
	printf("Enter the two integers:");
	scanf("%d%d",&a,&b);
	return (a+b);
}
