#include <stdio.h>
int main() 
{
    int num, rnum = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &num);
    while (num != 0) 
	{
        rem = num % 10;
        rnum = rnum * 10 + rem;
        num = num / 10;
    }
    printf("\nReverse of input number is: %d", rnum);
    return 0;
}
