#include<stdio.h>
void checkPrime(int a);
void main()
{
int a,res;
printf("Enter a number:");
scanf("%d",&a);
checkPrime(a);
}

void checkPrime(int a)
{
int count = 0,i;
if(a == 1||a ==0)
{
printf("It is not a prime number");
}
else{
for(i = 1; i < a; i++)
{ if(a % 2 == 0)
{
count ++;
}
else
{
count = count;
}
}
if(count > 2)
{
printf("It is not a prime number.");
}
else
{
printf("It is aprime number");
}
}
}
