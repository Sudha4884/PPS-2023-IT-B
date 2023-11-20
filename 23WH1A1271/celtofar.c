// CONVERSION OF CELSIUS TO FARENHEIT
#include<stdio.h>
int main ()
{
    float C,F;
    printf("\nEnter the value of temperature in celsius : ");
    scanf("%f",&C);
    F = C * 9/5 +32;
    printf("\n The value in Farenheit is %f \n",F);
    return 0;
}