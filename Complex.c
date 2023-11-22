#include<stdio.h>
struct Complex
{
int real;
int img;
}C[20];
void main()
{
int i,n;
printf("enter value of n ");
scanf("%d",&n);
printf("enter values of real and imanginary");
for(i=0;i<n;i++)
{
scanf("%d %d",&C[i].real,&C[i].img);
}
for(i=0;i<n;i++)
{
if(C[i].img>0)
printf("%d+%di\n",C[i].real,C[i].img);
else
printf("%d%di\n",C[i].real,C[i].img);
}
}

