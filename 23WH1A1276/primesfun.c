#include<stdio.h>
int checkPrime(int a);
void main()
{
int a,res;
printf("Enter a number:");
scanf("%d",&a);
res =  checkPrime(a);
if(res)
{
printf("It is a prime number");
}
else
{
printf("It is not a prime number");
}
}

int checkPrime(int a)
{
int count = 0,i;
if(a == 1||a ==0)
{
return 0;
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
return 0;
}
else
{
return 1;
}
}
}
