#include<stdio.h>
int main()
{
	int i,m,n,k;
    printf("enter the range: ");
	scanf("%d %d",&m,&n);
	printf("enter number to be skiped: ");
	scanf("%d",&k);
	for(i=m;i<=n;i=i+k)
	{
	printf(" %d",i);
}
	return 0;
}
