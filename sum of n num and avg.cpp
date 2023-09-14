#include <stdio.h>

int main()
{
    int i, n, sum=0;
    float avg;
    printf("enter the n th number to be sum: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d", n, sum);
    avg= sum/n;
    printf("\n Average of the given n numbers = %f", avg);
    
    return 0;
}
