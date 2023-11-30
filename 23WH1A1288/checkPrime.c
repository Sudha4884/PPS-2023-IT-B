#include<stdio.h>
void checkPrime(int);
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    checkPrime(num);
}
void checkPrime(int number)
{
    int factor,count=0;
    for(factor=1;factor<=number;factor++)
    {
        if(number%factor==0)
        count++;
    }
    if(count==2)
    printf("\n PRIME");
    else
    printf("\n NOT PRIME");
}