#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[50];
    int salary;
    char occup[100];
}e1;
int main()
{ 
    struct employee *sptr;
    sptr = &e1;
    printf("enter details of the employee: \n");
    scanf("%d%s%d%s",&sptr -> id,sptr -> name,&sptr -> salary,sptr -> occup);
    printf("ID : %d \nName : %s \nSalary : %d \nOccupation : %s", sptr -> id, sptr -> name, sptr->salary, sptr->occup);
    return 0;
}