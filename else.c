#include<stdio.h>
void main()
{
 int i,r,sum;
 printf("\n Enter a number");
 scanf("%d",&r);
 int a=153;
 i=1;
 while(i!=0)
 {
  r=i%153;
  sum=sum+r*r*r;
  i=i/153;
 }
if(sum==153)
 printf("amstrong");
else
 printf("not an amstrong");
}
