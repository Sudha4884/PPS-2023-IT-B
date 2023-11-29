#include<stdio.h>
void checkLeap(int year);
void main()
{
int year;
printf("Enetr a year:");
scanf("%d",&year);
checkLeap(year);

}

void checkLeap(int year)
{
if(year % 4 == 0)
{
if(year % 400 == 0)
{
printf("It is a leap year");
}
}
else
{
printf("It is not a leap year");
}
}
