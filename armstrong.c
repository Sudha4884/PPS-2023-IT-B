#include<stdio.h>
int checkAmstrong(int);
void main()
{
int num, res;
printf("\n ENTER NUMBER : \n");
scanf("%d",&num);
res = checkAmstrong(num);
if (res)
printf("IT IS AN AMSTRONG NUMBER \n ");
else
printf("IT IS NOT AN AMSTRONG NUMBER \n ");
}
int checkAmstrong(int num)
{
int x , reminder, sum = 0;
x = num;
while(num!=0)
{
reminder = num % 10;
sum = sum + reminder * reminder * reminder ;
num = num / 10;
}
if (sum == x)
return 1;
else
return 0;
}


