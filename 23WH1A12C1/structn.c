#include<stdio.h>
#include<string.h>
struct student
{
 char name[10];
 int marks;
 int roll;
}s[3];
void main()
{
 int i;
 for(i=0;i<3;i++)
 {
  printf("enter details of student: ");
  scanf("%s %d %d",s[i].name,&s[i].marks,&s[i].roll);
 }
 for(i=0;i<3;i++)
 {
  printf("%s %d %d",s[i].name,s[i].marks,s[i].roll);
 }
} 
