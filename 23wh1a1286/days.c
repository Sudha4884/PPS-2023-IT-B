// CONVERTING DAYS INTO WEEKS,YEARS,MONTHS,DAYS
#include<stdio.h>
int main ()
{
    int Days ,years, months, weeks, days;
   printf("\n Enter Given Days");
   scanf("%d",&Days);
   years = Days/365;
   months = Days % 365 / 30;
   weeks = Days % 365 % 30 / 7;
   days = Days % 365 % 30 % 7;
   printf("\n %d is equivalent to %d years, %d months, %d weeks, %d days", Days, years, months, weeks, days);
   return 0;
}