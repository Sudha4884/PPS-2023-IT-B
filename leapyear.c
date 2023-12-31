#include<stdio.h>
int leapyear(int);
void main()
{
int year , res;
scanf("%d",&year);
res = leapyear(year);
if (res == 1)
printf("IT IS A LEAP YEAR \n");
else 
printf("IT IS NOT A LEAP YEAR \n");
}
int leapyear(int num)
{
if(num % 4 == 0 && num % 100 == 0)
return 1;
else
return 0;
}
