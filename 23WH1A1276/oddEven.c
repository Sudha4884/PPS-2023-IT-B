#include<stdio.h>
int checkLSB(int a);

    int checkLSB(int a)
    {
        int b = 1;
        if( a & b )
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

void main()
{
    int a,result;
    printf("Enter a number:");
    scanf("%d",&a);
    result = checkLSB(a);
    if(result)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
}