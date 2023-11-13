#include<stdio.h>
void main()
{
    int i, n,mul;
    printf("Enter a number:");
    scanf("%d\n",&n);
    for(i =1; i < 11; i++)
    {
      mul = n * i;
      printf("%d\n",mul);
    }
}