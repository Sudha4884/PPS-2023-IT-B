#include<stdio.h>

struct complexno,
{
int real;
int imaginary;
};
struct complex c1;
void main()
{
priintf("enter the real and imaginary part");
scanf("%f %f ",&real,&imaginary);
if imaginary>0
{
printf("%f+i %f",real,imaginary);
}
else
{
printf("%f-i%f",real,imaginary);
}
}

