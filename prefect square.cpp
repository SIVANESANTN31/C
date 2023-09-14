#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,start,stop;
	float p;
	printf("enter the upper and lower range:");
	scanf("%d %d",&start,&stop);
	for (n=start;n<=stop;n++)
	{
		p=sqrt(n);
		m=p;
		if (p==m)
		printf("%d\n",n);
	}
}
