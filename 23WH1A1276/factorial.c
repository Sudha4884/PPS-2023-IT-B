#include<stdio.h>
void findFactorial(int num);
void main()
{
int num,res;
printf("Enter a number:");
scanf("%d",&num);
findFactorial(num);

}

void findFactorial(int num)
{
int i,fac = 1;
for(i = 1; i <= num; i++)
{
fac = fac * i;
}
printf("%d",fac);
}
