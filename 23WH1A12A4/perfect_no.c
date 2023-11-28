// Check if no is perfect
#include<stdio.h>
int main ()
{
    int i,num,sum;
    printf("\n enter :");
    scanf("%d", & num);
    i = 1, sum = 0;
    while (i<= num)
    {
        if(num %i == 0)
        sum += i;
        i++;
    }
    if(sum == 2 * num)
    printf("\n Number is perfect");
    else
    printf("\n Number is not perfect");
    return 0;
}