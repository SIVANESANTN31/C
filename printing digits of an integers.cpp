#include <stdio.h>

int main() 
{
	int num;
	printf("enter the number n:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		int digit = num%10;
		num = num/10;
		printf("%d ,",digit);
	}
	return 0;
}
