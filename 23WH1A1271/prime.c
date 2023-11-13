// to get prime nukmber
#include<stdio.h>
int main ()
{
    int num,i,count = 0;
    printf("\n Enter the no :");
    scanf("%d", &num);
    i =1;
    while(i <= num)
    {
        if (num % i == 0)
        count ++;
        i++;
    }
    if(count == 2)
    printf("\n Given number is prime");
    else
    printf("\n Number is composite");
    return 0;
}

