#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n/=10;
    }
    if(temp==sum)
    printf("ARMSTRONG NUMBER");
    else
    printf("NOT A ARMSTRONG");
}