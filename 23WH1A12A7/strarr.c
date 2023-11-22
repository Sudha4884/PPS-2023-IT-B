#include<stdio.h>
struct emp
{
char name[200];
int age;
char gender;
float salary;
int block;
}e;
struct emp *eptr;
int main()
{
eptr=&e;
printf("enter name age gender salary block of an employee\n");
scanf("%s %d %c %f %d",eptr->name,&eptr->age,&eptr->gender,&eptr->salary,&eptr->block);
printf("%s %d %c %f %d",eptr->name,eptr->age,eptr->gender,eptr->salary,eptr->block);
}
