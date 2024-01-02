#include<stdio.h>
void printNatural(int);
void main ()
{
int n;
scanf("%d",&n);
printNatural(n);
}
void printNatural(int n)
{
if(n==0)
	return;
else
{
printf("%2d ",n);
printNatural(n-1);
printf("\n\n");
printf("%2d ",n);
}
}