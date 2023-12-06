#include<stdio.h>
void swap(int, int);
void swapref(int*,int*);
void main()
{
 int a,b;
 printf("\n enter a,b values: ");
 scanf("%d %d", &a,&b);
 printf("\n before swap: ");
 printf("%d %d ", a,b);
swap(a,b);
printf("\n after swap: ");
printf(" \n %d %d", a,b);
swapref(&a,&b);
printf("\n after swap by reference: ");
printf("%d %d", a,b);
}
void swap(int m, int n)
{
int t=m;
m=n;
n=t;
printf("swap");
printf("\n after swap: ");
printf("%d %d", m,n);
}

void swapref(int *x, int *y)
{
int t=*x;
*x=*y;
*y=t;
}
