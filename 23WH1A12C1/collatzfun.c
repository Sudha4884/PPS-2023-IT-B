#include<stdio.h>
void collatz(int n)
{
 printf("%d",n);
 while(n!=1)
 {
  if(n%2==0)
  {
   n=n/2;
  }
  else
  {
   n=3*n+1;
  }
  printf("%d\n",n);
 }
}
int main()
{
 int number;
 printf("enter a number: ");
 scanf("%d",&number);
 collatz(number);
 return 0;
} 


