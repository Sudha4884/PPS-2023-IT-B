//Method1
/*#include<stdio.h>

int checkPrimeNumber(int num)
{
    int i,f=1;
    for(i =2; i <=num/2;i++)
    {
        if(num % i == 0)
        {
            f = 0;
            break;
        }
    }
    return f;
}
int main()
{
    int num1,num2,j,f;
    printf("Enetr the starting and ending number:");
    scanf("%d %d",&num1,&num2);
    printf("The prime numbers between %d and %d are:",num1,num2);
    
    for(j = num1; j <=num2 ; j++)
    {
        f = checkPrimeNumber(j);
        if(f == 1)
        {
            printf("%d ",j);
        }
    }

    return 0;
}
*/


//method 2
#include<stdio.h>
int isPrime(int num)
{
    int i;
    for(i =2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers between %d and %d are ",num1,num2);
    while(num1 <= num2)
    {
        if(isPrime(num1))
        {
            printf("%d ",num1);
        }
        num1++;
    }
}