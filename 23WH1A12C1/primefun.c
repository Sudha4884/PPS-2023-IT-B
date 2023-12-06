#include<stdio.h>
int checkPrime(int)
int printPrimes(int,int)
void main()
{
  int l,u;
  printf("enter range: ");
  scanf("%d%d",&l,&u);
  printPrimes(l,u);
}
void main()
{
 int num,res:
 scanf("%d",&num);
 res=checkPrime(num);
 if(res==1)
   printf("\n PRIME"):
 else
   printf("\n NOT PRIME");
}
int checkPrimes(int number)
{
  int factor,countn=0;
  for(factor=1;factor<=number;factor++)
  {
    if(number%factor=0)
    count++;
  }
  if(count==2)
     return 1;
  else
     return 0;
}
void printPrimes(int lb,int ub)
{
  int num;
  for(num=lb;num<=ub;num++)
  {
    res=checkPrime(num);
    if(res==1)
      printf("%d  ",num);
  }
}
