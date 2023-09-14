#include<stdio.h>
#include<string.h>
int main()
{
int value;
char usr1[20];
char usr2[20];
printf("Enter the username :");
scanf("%s",&usr1);
printf("Renter the username :");
scanf("%s",&usr2);
value=strcmp(usr1,usr2);
if(value==0)
{
printf("Username is valid");
}
else
{
printf("username is not valid");
}
return 0;
}
