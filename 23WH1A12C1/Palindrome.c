#include<stdio.h>
int main()

{ 
int n,r, sum=0,x;
printf ("Enter value of n: ");

scanf("%d",&n);
x=n;
while (n!=0)
{
r=n%10;

sum = sum*10+r;
n=n/10;
}
if (sum == x)
{
printf(" Palindrome"); 
}
else

printf("Not a Palindrome"); 
return 0;
}

