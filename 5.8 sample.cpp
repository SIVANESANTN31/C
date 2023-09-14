#include<stdio.h>
int main()
{
	int var=18;
	int *p;
	p=&var;
	
	printf("address of var is:%p",&var);
	printf("\n address of var is :%p",p);
	
	printf("\n value of var is:%d",var);
	printf("\n value of var is:%d",*p);
	printf("\n value of var is:%d",*(&var));
	
	printf("\n value of pointer p is:%p",p);
	printf("\n address of pointer p is:%p",&p);
	
	return 0;
}
