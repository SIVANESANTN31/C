#include<stdio.h>
int main()
{
char ch;
int upper=0;
int lower=0;
int digits=0;
for(ch != '*')
{
printf("\nEnter any character, or * to quit :");
scanf("%c",&ch);
ch=getchar();
if (ch>='a'&& ch<='z')
lower++;
if (ch>='A'&&ch<='Z')
upper++;
if (ch>=0)
digits++;
}
printf("\nOutput:");
printf("\nTotal count of lowercase characters entered = %d",lower);
printf("\nTotal count of uppercase characters entered = %d",upper);
printf("\nTotal count of digits entered = %d",digits);
return 0;
}
