// CONVERSION OF CM TO M AND KM
#include<stdio.h>
int main ()
{
    float cm,km,m;
    printf("\n Give length in centimeter :");
    scanf("%f",&cm);
    m = cm / 100.0;
    km = cm / 100000.0;
    printf("\n length in meter and kilometer is %.2f and %f",m,km);
    return 0;
}