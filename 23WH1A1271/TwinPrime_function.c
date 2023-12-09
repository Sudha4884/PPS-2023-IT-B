#include<stdio.h>
int checkPrime(int);
void printPrime(int,int);
void twinPrime(int,int);
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printPrime(a,b);
    twinPrime(a,b);
}
int checkPrime(int number)
{
    int factor,count=0;
    for(factor=1;factor<=number;factor++)
        if(number %factor == 0)
            count += 1;
    if(count==2)
        return 1;
    else
        return 0;
}
void printPrime(int lb,int ub)
{
    int num;
    printf("\n The numbers between %d and %d :",lb,ub);
    for(num=lb;num<=ub;num++)
        if(checkPrime(num))
        printf("%2d ",num);
}
void twinPrime(int lb,int ub)
{
    int num;
    printf("\n All the twin primes between %d and %d :",lb,ub);
    for(num=lb;num<=ub;num++)
        if(checkPrime(num) && checkPrime(num+2))
            printf("\n (%d , %d)",num,num+2);
}