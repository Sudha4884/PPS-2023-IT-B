#include<stdio.h>
int fact(int n)
{
 if(n==0 || n==1)
  return 1;
 else
  return n*fact(n-1);
}

void main()
{
 int num;
 printf("enter a number ");
 scanf("%d",&num);
 printf("\n Factorial of %d is %d\n",num,fact(num));
}