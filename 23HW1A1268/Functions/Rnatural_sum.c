//To find the sum of natural numbers
#include<stdio.h>
int sum_natural(int n)
{
 if(n==0)
  return 0;
 else
  return n+sum_natural(n-1);
}

void main()
{
 int n;
 printf("Enter a number ");
 scanf("%d",&n);
 printf("Sum of natural numbers is %d",sum_natural(n));
}
