#include<stdio.h>
void checkLeapVoid(int year);
void main()
{
int year;
printf("Enetr a year:");
scanf("%d",&year);
checkLeapVoid(year);

}

void checkLeapVoid(int year)
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