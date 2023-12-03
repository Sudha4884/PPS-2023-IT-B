#include<stdio.h>
int fact(int);
int fact(int n)
{
    int num = 1,f = 1;
    while(num <= n)
    {
        f *= num;
        num++;
    }
    return f;
}

void main()
{
    int sum;
    sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("%d ",sum);
}