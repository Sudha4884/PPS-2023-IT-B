#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact[n];
    fact[0] = 1;

    for(i=1; i<n; i++)
    {
        fact[i] = fact[i-1] * (i+1);
    }
    printf("factorial is %d",fact[n-1]);
}