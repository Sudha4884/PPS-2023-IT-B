#include<stdio.h>
int checkPrimes(int);
void printPrimes(int,int);
void twinPrime(int,int);
void main()
{
int l,u;
printf("{\n Enter the range");
scanf("%d%d",&l,&u);
printPrimes(l,u);
twinPrime(l,u);
}
int checkPrimes(int number)
{
int factor,count=0;
for(factor=1;factor<=number;factor++)
{
if(number%factor==0)
count+=1;
}
if(count==2)
return 1;
else
return 0;
}
void printPrimes(int lb,int ub)
{
int num;
printf("\n The Prime between %d and %d are \n",lb,ub);
for(num=lb;num<=ub;num++)
{
if(checkPrimes(num))
printf("%d ",num);
}
}
void twinPrime(int lb,int ub)
{
int num;
printf("\n The twinprime between %d and%d are \n",lb,ub);
for(num=lb;num<=ub;num++)
{
if(checkPrimes(num)&&checkPrimes(num+2))
printf("(%d %d)",num,num+2);
}
}
