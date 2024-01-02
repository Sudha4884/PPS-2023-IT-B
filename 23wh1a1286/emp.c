//Dtails of employ
#include<stdio.h>
struct emp
{
char name[20];
int id;
int salary;
char desig[20];
}e[3];
void main ()
{
int i;
for(i=0;i<3;i++)
{
printf("\n Enter details of employ \n");
scanf("%s%d%d%s",e[i].name,&e[i].id,&e[i].salary,e[i].desig);
}
printf("\n Details of employs:\n");
for(i=0;i<3;i++)
{
printf("\n %s %d %d %s",e[i].name,e[i].id,e[i].salary,e[i].desig);
}
}