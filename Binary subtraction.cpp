#include <stdio.h>


int binAddition(int a, int b)
{
    int c; 
    while (b != 0) {
   
        c = (a & b) << 1;
        a = a ^ b;
        b = c;
    }
    return a;
}

 
int binSubtracton(int a, int b)
{
    int carry;
    b = binAddition(~b, 1);

    while (b != 0) {
     
        carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main()
{
	int number1, number2, binAdd, binSub;

    printf("Input first integer value: ");
    scanf("%d", &number1);

    printf("Input second integer value: ");
    scanf("%d", &number2);
    
    binSub = binSubtracton(number1, number2);
    printf("Binary Subtraction: %d\n", binSub);

    return 0;
}

    
