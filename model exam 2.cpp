#include<stdio.h>
int main()
{
  float principle,rate,sinterest;
  int time,age ;
  printf("enter the principle,time,age:");
  scanf("%f %d %d",&principle,&time,&age);
  if (age>=60) printf("\n Is customer senior citizen(y/n): y\n");
  else printf("\n Is customer senior citizen(y/n): n\n");
  
  if(age>=60,rate=12)
  {
  	sinterest=principle*time*rate/100;
  	printf("simple interest is %f",sinterest);
  }
  else
  {
  	rate=10;
  	sinterest=principle*time*rate/100;
  	printf("\n simple interest is %f",sinterest);
  }
  return 0;
}
