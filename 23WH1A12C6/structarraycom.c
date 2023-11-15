#include<stdio.h>
struct complex
{
int real;
int img;
}c[5];
void main()
{
int i;
for(i=0;i<4;i++)
  {
scanf("%d %d",&c[i].real,&c[i].img);
printf("%d+%di",c[i].real,c[i].img);
  }
}

