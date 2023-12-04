//To find the sum of series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
#include<stdio.h>
int series_sum(int);

void main()
{
    int num=5;
    printf("sum of series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 is %d", series_sum(num));
}

int series_sum(n)
{
    int sum[n], i, prod = 1;
    sum[0] = 1;
    for(i = 1; i<=n; i++)
    {
        prod = prod * i;
        sum[i] = sum[i-1] + prod;
    }
    return sum[n-1];
}