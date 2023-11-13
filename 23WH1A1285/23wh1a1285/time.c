#include<stdio.h>
void main()
{
int second,minute,a,b,hour;
printf("enter seconds:");
scanf("%d",&second);
hour=second/3600;
a=second%3600;
minute=a/60;
b=minute%60;
second=b; 
printf("%d:%d:%d", hour,minute, second);
}

