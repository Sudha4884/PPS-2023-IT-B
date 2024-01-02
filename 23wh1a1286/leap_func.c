#include<stdio.h>
int LeapYear(int);
void main ()
{
    int year,res;
    scanf("%d",&year);
    res = LeapYear(year);
    if(res)
        printf("\n The given year is leap year");
    else
        printf("\n The given year is not leap year");
}
int LeapYear(int number)
{
    if(number%4==0 && number%100!=0 || number%400==0)
        return 1;
    else
        return 0;
}
