#include<stdio.h>
struct Complex
{
int real;
int img;
}c1;
struct Complex *ptr;
void main()
{
ptr=&c1;
printf("enter the values of real and imaginary\n");
scanf("%d %d",&c1.real,&c1.img);
printf("%d+%di",c1.real,c1.img);
printf("enter the values of real and imaginary \n");
scanf("%d %d",&ptr->real,&ptr->img);
printf("%d+%di",ptr->real,ptr->img);
}

