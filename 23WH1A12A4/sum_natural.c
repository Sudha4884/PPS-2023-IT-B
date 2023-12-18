#include<stdio.h>
int natural(int n);
int main()
{
int n;
printf("eenter n: ");
scanf("%d", &n);
int a=natural(n);
natural(n);
printf("%d",a);
}
int natural(int n)
{
int natural1 =0;
if(n==1)
return n;
natural1= natural(n-1)+n;
return natural1;
}
