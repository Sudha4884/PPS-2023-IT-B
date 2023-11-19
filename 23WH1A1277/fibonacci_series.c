#include<stdio.h>
int main()
{
    int n,i,x,x1,x2;
    printf("enter number of terms : ");
    scanf("%d",&n);
    x1 = 0,  x1 = 1;
    x = x1 + x2;
    printf("enter series: ");
    scanf("%d%d",&x1,&x2);
    for ( i=0; i<n; i++)
    {
        printf("%d",x);
        x1 = x2;
        x2 = x;
        x = x1 + x2;
    }
}
