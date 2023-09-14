#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
   	int a,b;
	printf("Enter the two integers:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	getch();
}
int sum(int a, int b)
{

	printf("the add of a,b is:%d\n",a+b);
    printf("the sub of a,b is:%d\n",a-b);
	printf("the mul of a,b is:%d\n",a*b);
	printf("the div of a,b is:%d\n",a/b);
	printf("the mod of a,b is:%d\n",a%b); 
	return 0;
}
