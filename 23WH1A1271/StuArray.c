// Array of structures
#include<stdio.h>
struct student
{
char Name[20];
int id;
long int phno;
}s[3];
void main ()
{
int i;
for(i=0;i<3;i++)
{
printf("\n Enter details");
scanf("%s%d%ld",s[i].Name,&s[i].id,&s[i].phno);
}
for(i=0;i<3;i++)
{
printf("\n Details of student");
printf("\n %s %d %ld",s[i].Name,s[i].id,s[i].phno);
}
}
