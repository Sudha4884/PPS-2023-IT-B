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
    float simpleinterest = (principal*rate*time) / 100;
    printf("\nsimpleinterest : %.2f\n",simpleinterest);
    
}
    
