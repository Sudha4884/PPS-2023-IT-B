#include<stdio.h>
int checkLeap(int year);
void main()
{
int year,result;
printf("Enetr a year:");
scanf("%d",&year);
result = checkLeap(year);
if(result)
{
printf("%d is a leap year",year);
}
else
{
printf("%d is not aleap year",year);
}
}

int checkLeap(int year)
{
if(year % 4 == 0)
{
if(year % 400 == 0)
{
return 1;
}
}
else
{
return 0;
}
}
