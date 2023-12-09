#include<stdio.h>
int checkPrime(int);
void main()
{
    int num,res;
    scanf("%d",&num);
    res = checkPrime(num);
    if(res)
        printf("\n The number is Prime");
    else
        printf("\n The number is  not Prime");
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