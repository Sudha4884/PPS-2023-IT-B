#include<stdio.h>
struct complex
{
int real, imag;
}c1;
void main()
{
struct complex c1;
struct complex *cptr;
cptr = &c1;
printf("Enter the real and imaginary part of complex number:");
scanf("%d %d",&cptr->real,&cptr->imag);
printf("%d + i %d\n",*(cptr.real),*(cptr.imag));
printf("Enter new values for complex number:");
scanf("%d %d",&c1.real,&c1.imag);
printf("%d +i%d",c1.real,c1.imag);

}


