#include<stdio.h>
int isprime(int num)
{
if(num<=1)
{
return 0;
}
for (int i=2;i<=num/2;i++)
{
if(num%i==0)
{
return 0;
}
}}
void printprime(int lower,int upper)
{
for (int num=lower;num<=upper;num++)
{
if(isprime(num)){
printf("%d\t",num);
}
}
}
int main(){
int l,u;
printf("enter the lower limit:");
scanf("%d",&l);
printf("enter the upper limit:");
scanf("%d",&u);
printf("prime numbers between %d and %d are:\n",l,u);
printprime(l,u);
return 0;
}
 


