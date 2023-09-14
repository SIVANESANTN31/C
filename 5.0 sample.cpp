#include<stdio.h>
main()
{
	int a,h;
	int c=5;
	int *p;
	
	a=4*(c+5);
	
	p=&c;
	h=4*(*p+5);
	printf("a=%d,b=%d\n",a,h);
}
