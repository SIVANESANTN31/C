#include<stdio.h>
int main()
{
int total,staff,off,std,tec;
printf("Total users:");
scanf("%d",&total);
printf("Staff users:");
scanf("%d",&staff);
off=staff/3;
tec=staff+off;
std=total-staff-(off);
if(total>=staff && total>0 && total>tec)
{
printf("Student users:%d\n",std);
}
else
{
printf("invalid input");
}
}
