#include <stdio.h>
int main()
{
   int num,i,j;
   float array1[50], array2[50];
   printf("Enter no of elements in array:");
   scanf("%d", &num);
   printf("\n Array of elements:");

   for (i = 0; i < num ; i++)
   {
      scanf("%f", &array1[i]);
   }
   for (i = num - 1, j = 0; i >= 0; i--,j++)
   {
	  array2[j] = array1[i];
   }
   for (i = 0; i < num; i++)
   {
      array1[i] = array2[i];
   }
   printf("Reversed array elements:\n");
   for (i = 0; i< num; i++)
   {
      printf("%f\t", array1[i]);
   }
   return 0;
}
