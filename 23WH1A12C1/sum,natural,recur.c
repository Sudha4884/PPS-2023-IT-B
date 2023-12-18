#include<stdio.h>
int sumNatural(int n);
int sumNatural(int n)
{
 if(n<=0)
   return 0;
 else
   return n+sumNatural(n-1);
}
 int main()
{
  int n;
  printf("enter n value: ");
  scanf("%d",&n);
  printf("%d",sumNatural(n));
} 
