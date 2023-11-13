#include<stdio.h>
void main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("a is %d \n b is %d",a,b);
}

