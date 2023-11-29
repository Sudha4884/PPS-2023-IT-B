#include<stdio.h>
int checkArmstrong(int num);
int cube(int a);
void main()
{
int num;
printf("enter a number:");
scanf("%d",&num);
 checkArmstrong(num);

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
printf("It is armstrong number");
}
else
{
printf("It is not an armstrong number");
}
}

int cube(int a)
{
int sum = 0;
sum = a * a * a;
}

