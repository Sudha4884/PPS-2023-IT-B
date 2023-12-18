#include<stdio.h>
int natural(int n)
{
 if(n<=1)
   return 1;
 else
   printf("%d",n);
   return natural(n-1);
}
int main()
 {
   int n;
   printf("enter n value: ");
   scanf("%d",&n);
   printf("%d\n",natural(n));
 } 
