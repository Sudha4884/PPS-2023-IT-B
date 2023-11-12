#include <stdio.h>
#include <math.h>
int main(){
    float simple ,compund;
    float p,p1,r,r1,t,t1,n;
    printf("enter the principle amount ");
    scanf("%f",&p);
    printf("enter the rate of intrest ");
    scanf("%f",&r);
    printf("enter the time period ");
    scanf("%f",&t);
    simple = (p*r*t)/100;
    printf("the simple intrest is %.2f\n",simple);
    printf("enter the principle amount ");
    scanf("%f",&p1);
    printf("enter the rate of intrest ");
    scanf("%f",&r1);
    printf("enter the time period ");
    scanf("%f",&t1);
    printf("enter the number of times intrest is calculated ");
    scanf("%f",&n);
   float compound =p1*pow((1+(r1/(n*100))),n*t1);
    printf("the coumpound intrest is %.2f", compound);
    return 0;
}