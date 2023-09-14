	#include<stdio.h>  
	#include <string.h>    
	struct customer
	{
	char accountname[15];        
	int accountno,phno,amountw,amountd,n;    
	};    
	int main()
	{    
	int i,n;
	printf("no of customer details to be print:");scanf("%d",&n);
	struct customer st[10];    
	printf("Enter customers of bank details:");
	for(i=0;i<10;i++)
	{    
	printf("\nEnter accountname:");    
	scanf("%s",&st[i].accountname);    
	printf("Enter account no:");    
	scanf("%d",&st[i].accountno);
	printf("Enter phone no:");    
	scanf("%d",&st[i].phno);
	printf("Enter amount withdraw:");    
	scanf("%d",&st[i].amountw); 
	printf("Enter amount deposit:");    
	scanf("%d",&st[i].amountd);      
	}    
	printf("\ncustomer bank Information List:");    
	for(i=0;i<n;i++)
	{    
	printf("\naccount name:%s,amount withdraw:%d,amount deposit:%d",st[i].accountname,st[i].amountw,st[i].amountd);  
	printf("\naccount no:%d",st[i].accountno);
	printf("\nphone no:%d",st[i].phno);
	}    
    return 0;    
	}   

