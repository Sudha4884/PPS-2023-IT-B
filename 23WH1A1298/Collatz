#include<stdio.h>
void collatz(int);
void main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
collatz(num);
}
void collatz(int num)
{
while(num!=1)
{
if(num%2==0)
num=num/2;
else
num=3*num+1;
printf("%d\t",num);
}
printf("%d",num);
}
