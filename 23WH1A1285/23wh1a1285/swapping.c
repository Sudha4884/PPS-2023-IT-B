#include<stdio.h>
void main()
{
int a,b,c;
printf(" enter two numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d is a \n%d is b",a,b);
}
