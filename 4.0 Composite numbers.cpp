#include<stdio.h>                                                               
                                                                                                                                                                                                                                                                          
int main()                                                                     
{                                                                               
  int i, j, limit;                                                              
  int composite = 0;                                                            
  printf("Enter limit: ");                                                      
  scanf("%d", &limit);                                                          
                                                                                
  printf("Composite Numbers upto (%d): ", limit);                               
  for(i = 2;i <= limit;i++)                                                     
  {                                                                             
    composite = 0;                                                              
    for(j = i-1; j > 1 ; j--)                                                   
    {                                                                           
       if(i%j == 0)                                                             
         composite = 1;                                                         
    }                                                                           
    if(composite == 1)                                                          
     printf("%d\t", i);                                                         
  }                                                                             
  printf("\n");                                                                 
}     
