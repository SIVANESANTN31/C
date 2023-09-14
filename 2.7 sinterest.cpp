#include<stdio.h>
int main()
{
  float principle,rate,sinterest;
  int time;
  char age ;
  printf("enter the principle,time,senior citizen(y/z):");
  scanf("%f %d %c",&principle,&time,&age);
  if(age=='y',rate=12)
  {
  	sinterest=principle*time*rate/100;
  	printf("simple interest is %f",sinterest);
  }
  else
  {
  	rate=10;
  	sinterest=principle*time*rate/100;
  	printf("simple interest is %f",sinterest);
  }
  return 0;
}
