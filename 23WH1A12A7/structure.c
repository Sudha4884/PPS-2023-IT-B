#include<stdio.h>
struct Complex
{
int real;
int img;
}c1;
void main()
{
printf("enter the values of real and imaginary \n");
scanf("%d %d",&c1.real,&c1.img);
printf("complex number is\n");
if(c1.img > 0)
printf("%d+%di",c1.real,c1.img);
else
printf("%d%di",c1.real,c1.img);
}

