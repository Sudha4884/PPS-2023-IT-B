#include<stdio.h>
void swap(int,int);
void swapRef(int*,int*);
void main()
{
int a,b;
printf("\n Enter a,b values");
scanf("%d %d",&a,&b);
swap(a,b);
printf("\n After swap \n");
printf("%d %d",a,b);
swapRef(&a,&b);
printf("\n After swap\n");
printf("%d %d",a,b);
}
void swap(int a,int b)
{
int t=a;
    a=b;
    b=t;
}
void swapRef(int*x,int*y)
{
 int t=*x;
     *x=*y;
      *y=t;
}
