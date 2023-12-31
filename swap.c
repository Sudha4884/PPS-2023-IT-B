#include <stdio.h>
void swap(int,int );
void swapRef(int*,int*);
void main()
{
int a,b;
printf("\n Enter a,b values");
scanf("%d %d",&a,&b);
printf("\n Before swap\n");
printf("%d %d",a,b);
swap(a,b);
printf("\n swap by call value\n");
printf("%d %d",a,b);
swapRef(&a,&b);
printf("\n  swap using call by reference");
printf("%d %d",a,b);
}
void swapRef(int*x,int*y)
{
int t=*x;
*x=*y;
*y=t;
}
void swap(int m , int n)
{
int t=m;
m=n;
n=t;
}
