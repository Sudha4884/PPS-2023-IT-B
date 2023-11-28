#include<stdio.h>
int main()
{
    int i,x,y;
    printf("enter a number : ");
    scanf("%d",&x);
    y = 1;
    for(i=1;i<11;i++)
    {
        printf("%d * %d = %d \n", x, i, y=x*i);
    }
}
// table