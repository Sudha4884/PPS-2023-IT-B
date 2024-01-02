#include<stdio.h>
void main()
{
    int dividend, divisior,rem,quo;
    printf("Enter the dividend and the divisior(dividend > divisior):");
    scanf("%d%d\n",&dividend,&divisior);
    while(dividend % divisior != 0)
    {
        rem = dividend % divisior;
        dividend = divisior;
        divisior = rem;
    }
    printf("GCD:%d",divisior);

}