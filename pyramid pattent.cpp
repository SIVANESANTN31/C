#include<stdio.h>
int main()
{
	int i,j,r,sp,c=1;
	printf("enter the number of row: ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(sp=1;sp<=r-i;sp++)
		{
			printf("");
	    }
		for(j=0;j<=i;j++)
		{
		if(j==0||i==0){
		c=1;
	}
		else
		{
			c=c*(i-j+1)/j;
			printf("%4d",c);
		}
		printf("\n");
	}
	}
	return 0;
}
