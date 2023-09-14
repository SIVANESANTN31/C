#include<stdio.h>
#include<conio.h>
int main()
{
	float m1,m2,m3,m4;
	float pre,avg;
	float total;
	
	printf("enter the marks in python:");
	scanf("%f",&m1);
	printf("enter the marks in c programming:");
	scanf("%f",&m2);
	printf("enter the marks in mathematics:");
	scanf("%f",&m3);
	printf("enter the marks in physics:");
	scanf("%f",&m4);
	
	total=m1+m2+m3+m4;
	pre=(total/400)*100;
	avg= total/4;
	printf("\n total: %f",total);
	printf("\n precentage: %f",pre);
	printf("\n Aggregate: %f",avg);
	{
	if(pre>=75) 
	printf("\n Grade: Distinction(+A)");
	else if(pre>=60&& pre<75) 
	printf("\n Grade : First Division(A)");
	else if(pre>=50&& pre<60) 
	printf("\n Grade : Second Division(B)");
	else if(pre>=40&& pre<50) 
	printf("\n Grade : Third Division(C)");
	else
	printf("\n Fail");
    }
    return 0;
}
