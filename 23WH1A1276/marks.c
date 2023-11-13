/*#include<stdio.h>
#include<string.h>
int main()
{
    int marks[5],i;
    int sum = 0, avg = 0, per = 0;
    printf("Enter the marks of 5 subjects:");
    for(i = 0; i < 5;i++)
    {
        scanf("%d\n",&marks[i]);
    }
    printf("The sum of marks %d\n",marks[i]);
    
    for(i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    printf("%d",sum);
    avg = sum/5;
    printf("The average of 5 subjects is %d\n",avg);
    per = (sum/500) * 100;
    printf("The percentage is %d\n",per);
}*/

#include<stdio.h>
#include<math.h>
void main()
{
    int p,r,t,si,ci;
    printf("Enter the principle amount,interest rate,time:");
    scanf("%d %d %d",&p,&r,&t);
    si = (p * t * r)/100;
    printf("The simple interest is %d\n",si);
    ci = p * (pow((1 + r / 100), t));
    ci = ci-p;
    
    printf("The compound interest is %d",ci);

}