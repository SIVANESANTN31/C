#include <stdio.h>
int main()
{
  int n,x;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  printf("Enter the position of the largest element to be print:");
  scanf("%d",&x);
  for (int i = 1; i < x; ++i)
   {
      arr[0] = arr[i];
  }

  printf("Largest element = %f", arr[0]);

  return 0;
}
