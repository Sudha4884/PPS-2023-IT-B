#include<stdio.h>
int natural(int n);
int main()
{
int n;
printf("enter n: ");
scanf("%d", &n);
natural(n);
}
int natural(int n)
{
if (n<=0)
return 1;
else

natural (n-1);
printf("%d\n",n);
}
