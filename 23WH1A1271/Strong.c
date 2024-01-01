#include<stdio.h>
int factorial(int);
int strong(int);
void main()
{
    int num,res;
    printf("\n Enter a number: ");
    scanf("%d",&num);
    res=strong(num);
    if(num == res)
        printf("\n The number is strong number");
    else
        printf("\n The number is not strong number");
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
int strong(int n)
{
    int rem,sum=0;
    while(n!=0)
    {
        rem = n%10;
        sum +=factorial(rem);
        n=n/10;
    }
    return sum;
}