#include<stdio.h>
int checkPrime(int);
int twinPrimes(int,int);
int printPrimes(int,int);

void main()
{
int lb,ub;
printf("Enter the range:");
scanf("%d %d",&lb,&ub);
twinPrimes(lb,ub);
printPrimes(lb,ub);
}

int printPrimes(int lb,int ub)
{
int num,res;
printf("The prime numbers are:");
for(num = lb;num <= ub; num++)
{
if(checkPrime(num))
{
printf("%d ",num);
}
}
}

int twinPrimes(int lb,int ub)
{
int num;
for(num = lb; num <= ub;num++)
{
if(checkPrime(num) && checkPrime(num+2))
{
printf("%d %d ",num,num+2);
}
}
}

int checkPrime(int i)
{
int j,count=0;
for(j =1;j < i; j++)
{
 if(i % j==0)
{
count++;
}
}
if(count == 2)
{
return 1;
}
else
{
return 0;
}
}

