#include<stdio.h>
int isPrime(int);
void printPrimes(int lowerlimit,int upperlimit);
int main()
{
 int lowerlimit,upperlimit;
 printf("enter lower and upper limit of primes: ");
 scanf("%d %d",&lowerlimit,&upperlimit);
 printPrimes(lowerlimit,upperlimit);
 return 0;
}
void printPrimes(int lowerlimit,int upperlimit)
{
 printf("all prime numbers b/w %d to %d are: ",lowerlimit,upperlimit);
  while(lowerlimit<=upperlimit)
  {
    if(isPrime(lowerlimit))
    {
      printf("%d ",lowerlimit);
    }
    lowerlimit++;
  }
}
int isPrime(int num)
{
  int i;
  for(i=2;i<=num/2;i++)
  {
    if(num%i==0) 
    {
      return 0;
    }
  }
 return 1;
}

