#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int);
void main()
{
    int num,res;
    printf("Enter number: ");
    scanf("%d",&num);
    res = checkPrime(num);
    if(res == 1)
    {
        printf("\nPrime");
    }
    else{
        printf("\nNot prime");
    }
}
    bool checkPrime(int number)
    {
        int factor,count = 0;
        for(factor = 1; factor <= number; factor++)
        {
            if(number % factor== 0)
            {
                count++;
            } 
        }
            if(count == 2)
            {
                return 1;
            }
            else{
                return 0;
            }
        
    }
