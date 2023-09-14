#include<stdio.h>
#include<conio.h>

int main ()
{
	float m1,m2,m3,m4;
	float per,avg;
	float total;
	
	printf(" enter the marks of m1 ");
	scanf("%f", &m1);
	printf(" enter the marks of m2 ");
	scanf("%f", &m2);
	printf("enter the marks of m3 ");
	scanf("%f", &m3);
	printf("enter the marks of m4 ");
	scanf("%f", &m4);
	
	total= m1+m2+m3+m4;
	printf("\n the total mark is %.2f ",total);
	per = (total/400)*100;
	avg = (total/4);
	printf("\n the percentage mark is : %.2f ", per);
	printf("\n the average mark  is: %.2f", avg);
	
	///// Grade calculation //
	if(per>=75) printf("\n Grade : +A");
	else if(per>=60&& per<75) printf("\n Grade : A");
	else if(per>=50&& per<60) printf("\n Grade : B");
	else if(per>=40&& per<50) printf("\n Grade : C");
	else printf("\n Fail");

	return 0;
}
