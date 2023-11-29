#include <stdio.h>
int leapYear(int);
void main(){
int year;
scanf("%d",&year);
int res = leapYear(year);
if (res){
printf("LEAP YEAR\n");
}
else{
printf("non leap year\n");
}
}
int leapYear(int year){
if(year%4 == 0 && year%100 != 0){
return 1;
}
else if(year%400 == 0){
return 1;
}
else{
return 0;
}
}

