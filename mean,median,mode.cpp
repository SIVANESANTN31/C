#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements: ");
	scanf("%d",&n);

	char a[20];
	printf("enter the array: ");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
 } 
