// AREA AND PERIMETER OF RECTANGLE
#include<stdio.h>
int main ()
{
    int l,b,perimeter,area;
    printf("\n Enter length and breadth of rectangle :");
    scanf("%d%d",&l,&b);
    perimeter = 2*(l+b);
    area = l*b;
    printf("\n The perimeter of rectangle is %d cm",perimeter);
    printf("\n The area of rectangle is %d cm^2",area);
}