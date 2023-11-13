#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    max = a;
    if(max > b)
    {
        max = b;
        printf("The maximum number is %d",max);
    }
    else
    {
        printf("The maximum number is %d",max);
    }

    return 0;
}