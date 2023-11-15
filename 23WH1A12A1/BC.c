/*read and print n complex numbers*/
#include<stdio.h>
struct complex
{
int real;
int imaginary;
int n;
}c[100];                                  
void main()  
{
int i=0,n;
printf("enter an integer\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter real,imaginary parts");
scanf("%d %d",&c[i].real,&c[i].imaginary);
}
for(i=0;i<n;i++)
{
printf("\n%d+%di",c[i].real,c[i].imaginary);
}
}
