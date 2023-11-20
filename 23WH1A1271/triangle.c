// TO ENTER BASE AND HEIGHT TO GET AREA OF TRIANGLE 
#include<stdio.h>
#include<math.h> // Used for sqrt() function
int main ()
{
    float base,height,area;
    printf("\n Enter Base and Height of triangle :");
    scanf("%f%f",&base,&height);
    area = 0.5 * base * height;           // AREA = 1/2(BASE*HEIGHT)
    printf("\n The area of triangle for base,height of %.2f,%.2f is %.2f ",base,height,area);


    //TO ENTER TWO ANGLES AND FIND THE THIRD ANGLE
    int A,B,C;
    printf("\n Enter two angles A,B :");
    scanf("%d%d",&A,&B);
    C = 180-A-B;
    printf("\n Angle of C is %d",C);
    printf("\n The three angles A,B,C are %d,%d,%d",A,B,C);


    //TO CALCULATE THE AREA OF EQUILATERAL TRIANGLE
    float a,Area;
    printf("\n Enter side of an equilateral triangle: ");
    scanf("%f", &a);
    Area = (sqrt(3) / 4) * (a* a);
    printf("\n Area of equilateral triangle = %.2f sq. units", Area);
    return 0;
}