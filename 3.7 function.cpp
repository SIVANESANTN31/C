#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	sum();
	getch();
}
int sum()
{
	int a,b;
	printf("Enter the two integers:");
	scanf("%d%d",&a,&b);
	printf("the sum of the numbers you entered is %d",a+b);
	return 0;
}
