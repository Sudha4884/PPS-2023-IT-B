#include<stdio.h>
int fact(int);
void main()
{
    int sum;
    sum = fact(1)/1+fact(2)/2+fact(3)/3+ fact(4)/4+ fact(5)/5;
    printf("\n The sum of series is ");
    printf("\n %d \n",sum);
}
int fact(int num)
{
    int n =0 , f = 1;
    while(n<=num-1)
    {
        f = f + f*n;
        n++;
    }
    return f;
}