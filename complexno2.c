#include<stdio.h>
struct complex 
{
float real;
float imaginary ;
}
c[];
void main()
{
int n,i;
for(i=0;i<n;i++)
{
printf("enter  the real and imaginary part:");
scanf("%d %d ",&c[i].real,&c[i].imaginary);
}
for(i=0;i<n;i++)
{
if (c[i].imaginary >0)
printf("\n %d+i%d",c[i].real,c[i].imaginary);
}



}


