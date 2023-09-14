#include<stdio.h>
int avg(int,int);
int main()
{
	int x[100],k,n;
	scanf("%d",&n);
	
	for (k=0;k<n;k++)
	scanf("%d",&x[k]);
	printf("\n average is %f",avg(x,n));
}
	float avg(int *array||,int size)
	{
		int *p,i,sum=0;
		p=array;
		for (i=0;i<size;i++)
		sum=sum+*(p[i]);
		return((float)sum/size);
	}

