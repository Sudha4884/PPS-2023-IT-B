#include <stdio.h>
#include <math.h>

int main()
{
float h,b,area;
printf("Enter breath and height :");
scanf("%lf %lf",&b,&h);
area = (0.5)*(b*h);
printf("area of triangle = %lf",area);
return 0;
}
