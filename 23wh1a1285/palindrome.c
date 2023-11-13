#include<stdio.h>
void main()
{ int n,r,t,a=0;
printf("enter a number");
scanf("%d",&n);
t=n;
while(n!=0)
{r=n%10;
a=a*10+r;
n=n/10;}
if(t==a)
printf("it is a palindrome");
else
printf("not a palindrome");
}



