#include<stdio.h>
void swap(int,int);
void swapRef(int*,int*);
void main()
{
 int a,b;
 printf("enter a,b values: ");
 scanf("%d %d",&a,&b);
 printf("\n before swap: %d %d ",a,b);
 swap(a,b);
 printf("\n after swap: %d %d ",a,b);
 swapRef(&a,&b);
 printf("\n after swapRef: %d %d",a,b);
}
void swap(int m,int n)
{
 int t=m;
     m=n;
     n=t;
 printf("\n Im in swap");
 printf("\nafter swap:");
 printf("%d %d",m,n);
}
void swapRef(int*x,int*y)
{
 int t=*x;
     *x=*y;
     *y=t;
} 

 
