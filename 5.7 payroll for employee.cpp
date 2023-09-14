	#include<stdio.h>  
	#include <string.h>    
	struct employee
	{
	char empname[15];    
	int empid; 
	int doj;    
	int phno,salary,n;    
	};    
	int main()
	{    
	int i,n;
	printf("no of employee details to be print:");scanf("%d",&n);
	struct employee st[10];    
	printf("Enter the employee details:");
	for(i=0;i<10;i++)
	{    
	printf("\nEnter employee name:");    
	scanf("%s",&st[i].empname);    
	printf("Enter employee id:");    
	scanf("%d",&st[i].empid);
	printf("Enter phone no:");    
	scanf("%d",&st[i].phno);
	printf("Enter date of joining:");    
	scanf("%d",&st[i].doj); 
	printf("Enter employee salary:");    
	scanf("%d",&st[i].salary);      
	}    
	printf("\nemployee Information List:");    
	for(i=0;i<n;i++)
	{    
	printf("\n employee name:%s,employee id:%d,phone no:%d,date of joining:%d,employee salary:%d",st[i].empname,st[i].empid,st[i].phno,st[i].doj,st[i].salary);    
	}    
    return 0;    
	}    

