#include<stdio.h>
int fib(int n);
int main()
{
int  i, n;
printf("enter n: ");
scanf("%d",&n);
printf("The fibonacci elements: ");
for(i=0; i<=n; i++)
printf("%d ",fib(i));
return 0;
}

int fib(int n)
{
if(n==0)
  {
   return 0;
  }
if(n==1)
  {
   return 1;
  }
int fibNm1 = fib(n-1);
int fibNm2= fib (n-2);
int fibN = fibNm1+fibNm2;
return fibN;
}
