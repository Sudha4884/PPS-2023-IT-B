/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, reverse=0, remainder, original;
    printf ("enter any integer");
    scanf("%d",&n);
    original=n;
    while(n!=0);{
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
}
if (original==reverse); {
printf("%d is a palindrome",original);
}
}