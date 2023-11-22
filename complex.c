#include<stdio.h>
#include<string.h>
struct complex
{
int real;
int imag;
};
struct complex c1;
void main()
{
printf("\n enter real,imag of c1");
scanf("%d %d",&c1.real,&c1.imag);
if(c1.imag<0)
 printf("\n %d-%di",c1.real,c1.imag);
else 
 printf("\n %d+%di",c1.real,c1.imag);
}

