//To print the twin primes
#include<stdio.h>
void prime(int a, int b)
{
 int i,count = 0;
 for(i=a;i<=b;i++)
 {
  int x=1;
  while(x <= i)
  {
   if (i % x == 0)
    count++;
  }
 if (count == 2)
  return 0;
 else
  return 1;
 }
}

void twinPrime(int i,int j)
{ 
  
}

void main()
{
 int num1,num2;
 printf("Enter the range\n");
 scanf("%d %d",&num1,&num2);
 twinPrime(num1,num2);
}
