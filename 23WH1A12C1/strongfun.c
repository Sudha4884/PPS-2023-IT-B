#include<stdio.h>
int factorial(int n)
 {
  int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact*=i;
  }
   return fact;
 }
int isStrong(int n)
{ 
  int sum=0,temp=n;
  while(temp>0)
  {
    sum+=factorial(temp%10);
   temp/=10;
  }
  return sum==n;
}
 int main()
{
 int n;
 printf("enter number: ");
 scanf("%d",&n);
  if(isStrong(n))
  {
    printf("strong");
  }
  else
  printf("not strong");
return 0;
}
  


 

