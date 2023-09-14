#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0;
	char c,str[100];
	printf("enter the sentence");
	gets(str);
	printf("enter the character:");
	scanf("%c",&c);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==c)
		{
			count++;
		}
	}printf("the repeated is:%d",count);
	return 0;
}
