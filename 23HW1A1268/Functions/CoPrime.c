//To print co primes
#include<stdio.h>
void coPrime(int, int);

void main()
{ 
 int num1,num2;
 scanf("%d %d",&num1,&num2);
 coPrime(num1,num2);
}

void coPrime(a,b)
{
 for(int i=a; i<=b;i++)
 {
  for(int j=a; j<=b; j++)
  {
   if(i % j != 0)
   {
    if(j % i != 0)
    {
     printf("%d %d\n",i,j);
    }
   }
  }
 }
}
