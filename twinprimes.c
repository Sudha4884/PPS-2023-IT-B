#include<stdio.h>
int checkPrime(int);
void printPrimes(int,int);
void twinPrimes(int,int);
void main()
{
int l,u;
printf("\n Enter the range");
scanf("%d%d",&l,&u);
printPrimes(l,u);
twinPrimes(l,u);
}
int checkPrime(int number)
{
int factor ,count=0;
for(factor=1;factor<=number;factor++)
{
if(number%factor ==0)
  count++;
}
if(count==2)
return 1;
else
return 0;
}
void printPrimes(int lb,int ub)
{
int num,res;
printf("\n The primes between %d and %d are \n",lb,ub);
for(num=lb;num<=ub;num++)
{
if(checkPrime(num))
printf("%d",num);
}
}
void twinPrimes(int lb,int ub)
{
int num;
printf("\n The Twin primes between %d and %d are \n",lb,ub);
for(num=lb;num<=ub;num++)
{
if(checkPrime(num)&&checkPrime(num+2))
printf("%d %d \n",num,num+2);
}
}
