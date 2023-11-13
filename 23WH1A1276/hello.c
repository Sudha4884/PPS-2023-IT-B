#include<stdio.h>
#include<math.h>
int main()
{
    float b,h,area;
    int c;
    area = 0;
    printf("Enter the base and height of the triangle:");
    scanf("%f\n",&b,&h);
    area = (1/2 * b * h);
    printf("The aea of the triangle is %f\n",area);
    printf("Enter the side of the equilateral triangle:");
    scanf("%d\n",&c);
    area =  (sqrt(3)/4) * (c ^ 2);
    printf("Area of the equilateral triangle is %f",area);
    return 0;
}