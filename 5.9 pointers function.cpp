#include<stdio.h>
#include<conio.h>
int swap(int ,int);
main()
{
	int a,b;
	a=5;b=20;
	swap(a,b);
	getch();
	
}
int swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("\n a=%d,b=%d",a,b);
}
