#include<stdio.h>
int main()
{
	int num,rev=0,sum=0,n;
	printf("enter number of harsher number:");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		rev=num%10;
		sum=sum+rev;
		num=num/10;
	}
	if(n%sum==0)
	{
		printf("%d is harshad number",n);
	}
	else
	{
		printf("%d is not harshad number:",n);
	}
	return 0;
}
