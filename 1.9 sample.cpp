#include<stdio.h>
int main()
{
    float principle,rate,sinterest;
    int time;
	
	printf("enter the principle amount,rate %% per annum and time\n");
	scanf("%f %f %d",&principle,&rate,&time);
	
	sinterest=(principle*rate*time)/100.0;
	
	printf("simple interest is %f ",sinterest);
	return 0;
}
	
