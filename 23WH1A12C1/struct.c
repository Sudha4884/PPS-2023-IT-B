#include<stdio.h>
#include<string.h>
struct student
{
 char name[10];
 int marks;
 int roll;
}s;
void main()
{
 printf("enter details of s: ");
 scanf("%s %d %d ",s.name,&s.marks,&s.roll);
 printf("%s %d %d",s.name,s.marks,s.roll);
} 
