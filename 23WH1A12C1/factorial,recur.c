#include<stdio.h>
int factorial(int n);
void main()
{
  int n;
   printf("enter n value: ");
  scanf("%d",&n);

  printf("%d\n",factorial(n));
  
}
int factorial(int n)
{
  if(n==0 || n==1)
    return 1;
  else 
    return n*factorial(n-1);
}
