#include<stdio.h>
void checkAmstrongVoid(int);
void main()
{
    int num,res;
    printf("Enter a number:\n");
    scanf("%d",&num);
    checkAmstrongVoid(num);
}
void checkAmstrongVoid(int num)
{
    int t,remainder,sum=0;
    t=num;
    while(num!=0)
    {
        remainder =num%10;
        sum=sum+remainder*remainder*remainder;
        num=num/10;
        if(sum==t)
        printf("AMSTRONG");
        else
        printf("NOT AMSTRONG");
    }
}