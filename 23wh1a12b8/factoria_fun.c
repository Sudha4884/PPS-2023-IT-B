#include<stdio.h>
int findFactorial(int num);
void main()
{
int num,res;
printf("Enter a number:");
scanf("%d",&num);
res = findFactorial(num);
printf("%d",res);
}

int findFactorial(int num)
{
int i,fac = 1;
for(i = 1; i <= num; i++)
{
fac = fac * i;
}
return fac;
}