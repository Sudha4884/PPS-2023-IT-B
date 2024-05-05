#include <stdio.h>
#include <math.h>
float SI(float principal, float rate, int time)
{
 return (principal * rate * time) / 100.0;
}
float CI(float principal, float rate, int time)
{
 return principal * (pow((1 + rate / 100.0), time) - 1);
}
int main()
{
 float principal, rate;
int time;
 scanf("%f %f %f", &principal, &rate, &time);
float simpleInterest = SI(principal, rate, time);
float compoundInterest = CI(principal, rate, time);
 printf("%.2f %.2f\n", simpleInterest, compoundInterest);
}
