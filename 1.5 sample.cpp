#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter two differnt value:\n");
	scanf("%d%d",&a,&b);
	  if(a>b)
	  {
	  	printf("%d is largest \n",a);
	  }
	  else if(b>a)
	  {
	  	printf("%d is largest\n",b);
	  }
	  else
	  {
	  	printf("both are equal\n");
	  }
	  return 0;
}
