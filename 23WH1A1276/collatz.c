#include<stdio.h>
int collatz(int);
int checkEvenOdd(int);
void main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
collatz(num);
}

int collatz(int num)
{
int res,count=0;
while(num > 1)
{
res=checkEvenOdd(num);
if(res == 1)
{
num = num/2;
printf("%d ",num);
count++;
}
else
{
num = 3*num +1;
printf("%d ",num);
count++;
}

}
printf("The count is %d",count);
}

int checkEvenOdd(int num)
{
if(num % 2 == 0)
{
return 1;
}
else
{
return 0;
}
}


