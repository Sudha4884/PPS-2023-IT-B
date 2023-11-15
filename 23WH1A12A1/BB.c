/* read and print 1 complex number*/
#include<stdio.h>
struct complex
{
int real;
int imaginary;
};
void main()
{struct complex c1;
printf("enter real,imaginary of c1\n");
scanf("%d %d",&c1.real,&c1.imaginary);
printf("\n%d+%di", c1.real,c1.imaginary);
}
