#include<stdio.h>
void main()
 {
  int n,rem,rev=0;
  printf("enter the number");
  scanf("%d",&n);
  while(n!=0)
{
  rem=n%10;
  rev=rem+(rev*10);
  n=n/10;
}
  printf("the reverse number of number is %d",rev);
}
