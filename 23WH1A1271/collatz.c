#include<stdio.h>
void collatz(int);
void main()
{
    int num;
    printf("\n Enter a number");
    scanf("%d",&num);
    printf("\n %d \n",num);
    collatz(num);
}
void collatz(int n)
{
    int count=1;
    while(n!=1)
    {
        if(n%2==0)
        {  n = n/2;
        count++;
        }
        else
        {
        n = 3*n+1;
        count++;
        }
        printf("\n %d",n);
        printf("\n");
    }
    printf("\n Count = %d",count);
}