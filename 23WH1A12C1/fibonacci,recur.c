#include<stdio.h>
int fibonacci(int n);

int fibonacci(int n)
{
 if(n==0 || n==1)
   return 1;
 else
   return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{ 
 int n,f1=0,f2=1,f3,i;
  printf("enter n value: ");
  scanf("%d", &n);
   printf("%d %d ", f1,f2);

 for(i=1;i<n;i++)
   printf("%d ",fibonacci(i));
 return 0;
}
