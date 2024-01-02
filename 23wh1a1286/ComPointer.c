//struct complex where struct variable is pointer
#include<stdio.h>
struct complex
{
int real,imag;
};
struct complex *cptr,c1;
void main ()
{
cptr = &c1;
printf("\n Enter real,imaginary of complex");
scanf("%d%d", &cptr->real,&cptr->imag);
printf("\n The complex number is : \n");
printf("\n %d+(%d)i",cptr->real,cptr->imag);
}