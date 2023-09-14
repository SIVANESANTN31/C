#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define NO_OF_EMP	3
int main()
{
	float Salary[NO_OF_EMP],Bonus[NO_OF_EMP],BonGiven[NO_OF_EMP],TotalBonus=0,TotSal;
	char Grade[NO_OF_EMP];
	int Flag=1,n=0;
	
	while(n<NO_OF_EMP)
	{
		printf("\n\tEnter Employee #%d Grade (A or B): ",n+1); scanf("%c",&Grade[n]);
		printf("\n\tEnter Employee Salary            : "); scanf("%f",&Salary[n]);
		if(Grade[n]=='a' || Grade[n] == 'A') Bonus[n] = 5;
		if(Grade[n]=='b' || Grade[n] == 'B') Bonus[n] = 10;
		if(Salary[n]<=10000) Bonus[n] = 2;
		BonGiven[n] = Salary[n]*Bonus[n]/100;
		TotalBonus = TotalBonus+BonGiven[n];
		n++;		
	}
	
	for(n=0;n<NO_OF_EMP;n++)
	{
		TotSal = Salary[n]+BonGiven[n];
		printf("\n\tGrade: %c\tSalary: %.2f\tBonus: %6.2f\tTotal Salary: %6.2f",Grade[n],Salary[n],BonGiven[n],TotSal);
	}
	return(0);
}

