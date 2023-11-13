#include<stdio.h>
int main()
{
float BS;
float PDA,PHRA,NS;
printf("enter your basic salary: ");
scanf("%f",&BS);

PDA = BS * (50/100.0);
printf("percentage of DA is: %f ",PDA);

PHRA = BS * (10/100.0);
printf("percentage of HRA is: %f ",PHRA);

NS = BS + PDA + PHRA;
printf("Net salary is: %f ",NS);
}
