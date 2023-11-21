#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF N:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("ONE");
               break;
        case 2+1:printf("THREE");
        break;
        case 3+1:printf("FOUR");
        break;
        case 4+1:printf("FIVE");
        break;
        case 5+1:printf("SIX");
        break;
        case 6+1:printf("SEVEN");
        break;
        case 7+1:printf("EIGHT");
        break;
        case 8+1:printf("NINE");
        break;
        case 9+1:printf("TEN");
        break;
        case 10-8:printf("TWO");
        break;
        default:
        printf("VALUE IS GREATER THAN 10");
        
    }
    return 0;
}