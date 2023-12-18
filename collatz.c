#include<stdio.h>
int collatz(int n)
{
printf("%d\n",n);
if(n==1)
return 1;
else if(n%2==0)
return collatz(n/2);
else
 return collatz(3*n+1);
}
int main()
{
int num;
printf("enter a positive integer:");
scanf("%d \n",&num);
printf("colatz sequence:\n");
collatz(num);
return 0;
}
