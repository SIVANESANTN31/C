#include<stdio.h>
int main()
{
	
	int a;
	int b;
	int add,sub,mul,pow;
	float div;
	printf("enter the integers\n");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	pow=a**b;
	
	printf("the add of a,b is:%d\n",add);
    printf("the sub of a,b is:%d\n",sub);
	printf("the mul of a,b is:%d\n",mul);
	printf("the div of a,b is:%d\n",div);
	printf("the POW of a,b is:%d\n",pow); 
	return 0;
	
	
}
