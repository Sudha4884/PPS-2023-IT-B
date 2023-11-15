#include<stdio.h>
void main()
{
  int r,n,sum=0,x;
  printf("enter the number");
  scanf("%d",&n);
    r=n;
   while(n!=0)
  {
   r=n%10;
   sum=sum+(r*r*r);
  n=n/10;
   printf("\n r=%d and n=%d",r,n);
  }

  printf("the sum of numbers is %d", sum);
   
  if(sum==x)
  printf("\n armstrong");
 else
  printf("\n not armstrong");
}
