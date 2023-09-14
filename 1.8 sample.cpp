#include<stdio.h>
int main()
{
	int week;
	printf("enter the week mumber (1 to 7):");
	scanf("%d",&week);
	switch(week)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
		    printf("Tuesday");
		    break;
		case 3:
			printf("Wednesday");
		    break;
		case 4:
			printf("THursday");
			break;	
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;	
		case 7:
			printf("sunday");
			break;	
		default:
		  printf("invalid input.");
	}
	return 0;
}
