#include<stdio.h>
int main()
{
	int l,u,i,n;
	printf("enter the lower range: ");
	scanf("%d",&l);
	printf("enter the upper range: ");
	scanf("%d",&u);
    for(i=l;i<=u;i++)
    {
    	if(n<=0)
    	{
    		return 0;
		}
		else
		{
			printf("(%d,%d) \n",i,i*i);
		}
	}
	return 0;
}
