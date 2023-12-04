#include<stdio.h>
int fact(int n)
{
int f=1;
for (int i=1; i<=n; i++)
{
f=f*i;
}
return f;
}
int isstrong(int n)
{
int sum=0,temp=n;
while(temp>0)
{
sum+= fact(temp%10);
temp/= 10;
}
return sum==n;
}
int main()
{
int n;
printf("enter number");
scanf("%d", &n);
if(isstrong(n)){
printf("strong");
}
else
printf("not strong");

return 0;
}
