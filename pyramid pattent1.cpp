#include<stdio.h>
int main()
{
	int i,j,r,sp;
	printf("enter the number of row: ");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(sp=1;sp<=r-i;sp++)
		{
			printf("  ");
	    }
		for(j=1;j<=i;j++)
		{
			printf("%4d",j);
		}
		printf("\n");
	}
	return 0;
}
