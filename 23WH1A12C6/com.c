#include<stdio.h>
struct comlex
{
int real;
int img;
}c1;
void main()
{
printf("enter values");
scanf("%d %d",&c1.real,&c1.img);
printf("%d+%di",c1.real,c1.img);
}


