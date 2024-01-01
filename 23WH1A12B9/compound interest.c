#include<stdio.h>
#include<math.h>
int main()
{
    float principal,rate,time;
    printf("enter the principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interest:");
    scanf("%f",&rate);
    printf("enter time in years:");
    scanf("%f",&time);
    float compoundinterest = principal*(pow((1 + rate/100),time)-1);
    printf("\ncompoundinterest : %.2f\n",compoundinterest);
    
}
    