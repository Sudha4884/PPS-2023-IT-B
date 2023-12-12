#include<stdio.h>
int checkprime(int);
int main()
{
    int n;
    printf("\n Enter the number: ");
    scanf("%d", &n);
    if (checkprime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;

}
int checkprime(int n)
{
    int fact, count=0;
    for(fact = 1;fact<=n;fact++)
    {
        if(n%fact==0)
        count++;
    }
       if (count==2)
       return 1;
       else
       return 0;

}

