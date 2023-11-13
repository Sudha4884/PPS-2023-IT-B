#include<stdio.h>

struct student
{
char name[10];
int id;
};
void main()
{struct student *cptr,s1;
cptr=&s1;
printf("enter name:");
scanf("%s",&cptr->name);
printf("enter id:");
scanf("%d",&cptr->id);
printf("name is %s\nid is %d",cptr->name,cptr->id);
} 
