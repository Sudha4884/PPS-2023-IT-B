// DIAMETER, CIRCUMFERENCE, AREA OF CIRCLE
#include<stdio.h>
#define PI 3.14
int main()
{
    float r;
    printf("\n Enter the radius of circle :");
    scanf("%f",&r);
    printf("\n The diameter of circle is %f units", 2*r);            // dia =  2 * radius
    printf("\n The circumference of circle is %f units", 2*PI*r);   // circumference = 2*pi*radius
    printf("\n The area of circle is %f sq units", PI*r*r);          // area = pi*radius*radius
    return 0;
}