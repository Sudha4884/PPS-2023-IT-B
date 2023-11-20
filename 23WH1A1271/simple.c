//SIMPLE INTEREST
#include<stdio.h>
int main ()
{
    float P,T,R,SI;
   printf("\n Enter P,T,R :");
   scanf("%f%f%f",&P,&T,&R);
   SI=P*T*R/100;
   printf("The simple interest is = %.3f",SI);
return 0;
}