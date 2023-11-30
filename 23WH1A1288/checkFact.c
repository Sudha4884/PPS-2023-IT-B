#include<stdio.h>
int checkFact(int num);
void main()
{
int num,res;
printf("Enter a number:");
scanf("%d",&num);
res = checkFact(num);
printf("%d",res);
}

int checkFact(int num)
{
int i,fac = 1;
for(i = 1; i <= num; i++)
{
fac = fac * i;
}
return fac;
}