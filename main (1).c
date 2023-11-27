/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int base,exp;
    float result =1.0;
    printf("enter a base number:");
    scanf("%d",&base);
    printf("enter an exponent");
    scanf("%d",&exp);
    while(exp!=0)
    {
        result*=base;
        --exp;
    }
     printf("answer =%.0f",result);
    return 0;
}
