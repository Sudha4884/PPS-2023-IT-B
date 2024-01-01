#include<stdio.h>
int perfect(int );
void main()
{
    int num,res;
    printf("\n Enter a number:");
    scanf("%d",&num);
    res = perfect(num);
    if(res == num)
        printf("\n The number given is perfect number");
    else
        printf("\n The number given is perfect number");
}
int perfect(int num)
{
    int i,sum =0;
    while(i < num)
    {
        if (num % i == 0)
        sum += i;
        i++;
    }
    return sum;
}