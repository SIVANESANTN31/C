#include<stdio.h>
int main() {
	long int dec,r,q;
	int i=1,j,temp;
	char hexa[100];
	printf("Enter any decimal number: ");
	scanf("%ld",&dec);
	
	q = dec;
	while(q!=0) {
		temp = q % 16;

		if( temp < 10)
		           temp =temp + 48; else
		         temp = temp + 55;
		hexa[i++]= temp;
		q = q / 16;
	}
	printf("Equivalent hexadecimal value of decimal number %d: ",dec);
	for (j = i -1 ;j> 0;j--)
	      printf("%c",hexa[j]);
	return 0;
}
