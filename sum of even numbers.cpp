#include <stdio.h>

int main() {
	int i,n,sum =0;
	printf("enter the n th number of series:\n");
	scanf("%d",&n);
	printf("generating the even number series:");
	for (i = 1; i <= n; i++) 
	{
		if(i%2 == 0) 
		{
		  sum=sum+i;
		  printf("%d ", i);
		 	
		}
	}
	printf("\n sum of even number to n numbers: %d ",sum);
	return 0;
}

