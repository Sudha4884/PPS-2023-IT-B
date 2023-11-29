#include <stdio.h>
#include <math.h>

void main()
{
int l,b,area,perim;
printf("Enter length and breadth :");
scanf("%d,%d",&l,&b);
area = l*b;
perim = 2*(l+b);
printf("area of rectangle = %d",area);
printf("\nperimeter of rectangle = %d",perim);
}
