/*#include<stdio.h>
#define PI 3.14
void main()
{
    float l,b,r,area,perimeter;
    area = 0;
    perimeter= 0;
    printf("ENter the dimensions of the rectangle:");
    scanf("%f %f",&l,&b);
    perimeter = 2*(l + b);
    area = l * b;
    printf("The perimeter of rectangle is:%f",perimeter);
    printf("The area of the rectangle is %f",area);
    printf("Enter the radius of the circle:");
    scanf("%f",r);
    perimeter = 2 * PI * r;
    area = PI * (r * 2);
    printf("The perimeter of circle is:%f",perimeter);
    printf("The area of the circle is %f",area);
}
*/

/*#include<stdio.h>
void main()
{
    int  cm, m,km;
    
    printf("Enter the lenght in cm:\n");
    scanf("%d",&cm);
    m = cm / 100;
    km = m / 1000;
    printf("The lenght in meters is %d",m);
    printf("The lenght im kilometer is %d",km);
    
}*/

/*#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the temperatue in celsius:");
    scanf("%f",&c);
    f = (c * 1.8)+ 32;
    printf("The temperature in fahrenheit is %f\n",f);
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c = (f - 32) * (5 / 9);
    printf("The temperature in celsius is %f\n",c);
}*/


//DAYS CONVERSION INTO YEARS MONTHS AND DAYS
/*#include<stdio.h>
void main()
{
    int days,years,months,rem;
    printf("Enter the number of days:");
    scanf("%d\n",&days);
    years = days / 365;
    days = days % 365;
    months = days / 365;
    days = days % 365;
    printf("%d %d %d", years,months,days);
}*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the two angles of triangle:");
    scanf("%d %d\n",&a1,&a2);
    a3 = 180 - (a1+a2);
    printf("The third angle of triangle is %d",a3);
    return 0;
}