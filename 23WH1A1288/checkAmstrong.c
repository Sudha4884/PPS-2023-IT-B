#include<stdio.h>
int checkAmstrong(int);
void main()
{
    int num,res;
    printf("Enter number :\n");
    scanf("%d",&num);
    res=checkAmstrong(num);
    if(res)
    printf("It is Amstrong");
    else
    printf("It is not Amstrong");
}
int checkAmstrong(int num)
{
    int t,remainder,sum=0;
    t=num;
    while(num!=0)
    {
        remainder=num%10;
        sum=sum+remainder*remainder*remainder;
        num=num/10;
    }
    if (sum==t)
    return 1;
    else
    return 0;
}