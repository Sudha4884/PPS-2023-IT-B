#include<stdio.h>
#include<string.h>
struct student
{ 
 char name[10];
 int marks;
 int roll;
}s,*ptr;
void main()
{
 printf("enter student details: ");
 scanf("%s %d %d",s.name,&s.marks,&s.roll);
 printf("\n details of s: %s %d %d ",s.name,s.marks,s.roll);
 ptr=&s; 
 printf("enter details: ");
 scanf("%s %d %d",ptr->name,&ptr->marks,&ptr->roll);
 printf("\n details through pointer: %s %d %d: ", ptr->name,ptr->marks,ptr->roll);
} 
