#include<stdio.h>
void main()
{ int i,r,a=0;
printf("enter a number:");
scanf("%d",&i);
while(i!=0)
{r=i%10;
a=a*10+r;
i=i/10;}
printf("reverse numberis%d",a);
}


