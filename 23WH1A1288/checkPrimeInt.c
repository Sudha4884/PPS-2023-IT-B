#include<stdio.h>
int checkPrimeInt(int);
void main()
{
    int num,res;
    printf("Enter a number");
    scanf("%d",&num);
    res=checkPrimeInt(num);
    if(res==1)
    printf("\n PRIME");
    else
    printf("\n NOT PRIME");
}
int checkPrimeInt(int number)
{
    int factor,count=0;
    for(factor=1;factor<=number;factor++)
    {
        if(number%factor==0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;
}
