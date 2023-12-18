#include<stdio.h>
void main()
{
printf("%d",factorial(9));
}
int factorial(int n)
{
if(n==0|| n==1)
return 1;
else 
return n*factorial(n-1);
}
