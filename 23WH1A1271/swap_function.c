#include<stdio.h>
void swap(int,int);
void swapRef(int*,int*);
void main()
{
    int a,b;
    printf("\n Enter a,b values ");
    scanf("%d%d",&a,&b);
    printf("\n Before swap a=%d, b=%d ",a,b);
    swap(a,b);
        printf("\nAfter swap in calling: a=%d, b=%d ",a,b);
    swapRef(&a,&b);
        printf("\nAfter swapRef in calling: a=%d, b=%d ",a,b);
}
void swap(int m,int n)
{
    int t = m;
    m = n;
    n = t;
    printf("\n Inside function swap m= %d, n=%d",m,n);
}
void swapRef(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    printf("\n Inside function swap usiung reference x=%d, y=%d",*x,*y);
}
