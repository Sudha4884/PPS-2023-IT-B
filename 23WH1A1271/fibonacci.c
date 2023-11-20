// Fibonacci series till n terms
#include<stdio.h>
int main ()
{
    int i,n,x,y,f;
    x = -1, y= 1;
    printf("\n Enter upto which terms: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        f = x + y;
        x = y;
        y = f;
        printf("\n %d",f);
    }

    // to print only nth term write printf out of loop
    return 0;
}