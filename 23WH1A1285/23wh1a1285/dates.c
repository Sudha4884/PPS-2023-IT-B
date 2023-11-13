#include<stdio.h>
void main()
{
int a,b,month,year,days,week;
printf("enter number of days");
scanf("%d",&days);
year=days/365;
a=days%365;
month=a/30;
b=a%30;
week=b/7;
days=b%7;
printf("%d year\n %d month \n %d week\n %d days", year,month,week,days);
}

