#include<stdio.h>
int armstrong(int);
void main ()
{
    int num,res;
    scanf("%d",&num);
    res = armstrong(num);
    if(res)
    printf("\n The number is Armstrong");
    else
    printf("\n The number is not armstrong");
}
int armstrong(int number)
{
    int temp,sum=0,rem;
    temp = number;
    while(number!=0)
    {
    rem = number % 10;
    sum += rem*rem*rem;
    number = number/10;
    }
    printf("\n Sum is %d",sum);
    if(sum == temp)
    return 1;
    else
    return 0;
}