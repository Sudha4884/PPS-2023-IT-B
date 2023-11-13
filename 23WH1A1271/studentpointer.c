//structure variable is a pointer
#include<stdio.h>
struct student 
{
char Name[20];
int id;
long int phno;
};
struct student *sptr,s1;
void main ()
{
sptr = &s1;
printf("\n Enter student details :");
scanf("%s%d%ld",sptr->Name,&sptr->id,&sptr->phno);
printf("\n Details of student is :");
printf("\n %s %d %ld",sptr->Name,sptr->id,sptr->phno);
}
