#include "stdio.h" 
#include "math.h" 
 
int main(void) 
{ 
  int  limit=3, i=0, x=0; 
   double sum =0;
   printf("enter x value: ");
  scanf("%lf", & x); 
  
  for(i = 0; i <= limit; i++) 
  { 
    sum += pow(-x/2i, i); 
  } 
  
  printf("sum is %0.0f\n", sum); 
  return 0; 
} 