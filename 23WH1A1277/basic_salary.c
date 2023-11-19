#include<stdio.h>
int main()
{
float bs;
float pda,hra,ns;
printf("enter your basic salary: ");
scanf("%f",&bs);

pda = bs * (50/100.0);
printf("percentage of DA is: %.2f ",pda);
// PDA = 50% of personal development allowance

hra = bs * (10/100.0);
printf("percentage of HRA is: %.2f ",hra);
// HRA = 10% of house rent allowance 

ns = bs + pda + hra;
printf("Net salary is: %.2f ",ns);
}
