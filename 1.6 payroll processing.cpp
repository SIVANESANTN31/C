#include<stdio.h>
#include<string.h>
struct employer
{
	char name[30];
	int emplid,i;
	float salary;
};
int main()
{
	int i;
	struct employer emp[5];
    printf("\n enter details:\n");
	for (i=0;i<5;i++)
	{
	printf("name?:");
    scanf("%s",&emp[i].name);
	printf("ID?:");
	scanf("%d",&emp[i].emplid);
	printf("salary?:");
	scanf("%f",&emp[i].salary);
    }
    printf("\n enter details:\n");
    for(i=0;i<5;i++)
    {
	printf("name:%s\n",emp[i].name);
	printf("ID:%d\n",emp[i].emplid);
	printf("salary:%f\n",emp[i].salary);
    }
	return 0;
}
