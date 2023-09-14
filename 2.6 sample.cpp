#include<stdio.h>
int main()
{
	int i,j,temp,n,a[5];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements to be sorted:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
	        	a[i]=a[j];
	        	a[j]=temp;
			}
		}
		
	}
	printf("the sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
