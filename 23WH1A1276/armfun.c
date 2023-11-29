#include<stdio.h>
int checkArmstrong(int num);
int cube(int a);
void main()
{
int num,result;
printf("enter a number:");
scanf("%d",&num);
result = checkArmstrong(num);
if(result)
{
printf("%d is an armstrong number",num);
}
else
{
printf("%d is not an armstrong number",num);
}
}

int checkArmstrong(int num)
{
int a,res;
int n = num;
while(num != 0)
{
a = num % 10;
res += cube( a);
num = num / 10;
}
if(res == n)
{
return 1;
}
else
{
return 0;
}
}
