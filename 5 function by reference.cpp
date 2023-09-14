#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	a=5,b=20;
	swap(&a,&b);
	printf("\n a=%d,b=%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	
}
