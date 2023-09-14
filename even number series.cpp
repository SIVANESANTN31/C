#include <stdio.h>

int main() {
	int i,n;
	printf("enter the n th number of series:\n");
	scanf("%d",&n);
	printf("generating the even number series:");
	for (i = 1; i <= n; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}

