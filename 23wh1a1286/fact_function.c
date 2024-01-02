#include<stdio.h>
int factorial(int);
void main()
{
    int num,res;
    scanf("%d",&num);
    res = factorial(num);
    printf("\n The factorial of %d is %d",num,res);
}
int factorial(int number)
{
    int i,product=1;
    for(i=1;i<=number;i++)
    {
    product =product*i;
    }
    return product;
}