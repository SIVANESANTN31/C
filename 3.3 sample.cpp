#include<stdio.h>
int main()
{
	float total,avg;
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    total
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
    	printf("Fail")
	}
    
    else if(marks>=40 && marks<50)
    {
        printf("Grade C");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade B");
    }
    else if(marks>=60 && marks<75)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
    
}
