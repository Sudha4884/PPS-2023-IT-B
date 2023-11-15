#include<stdio.h>
struct student
{
char name[5];
int rollno; 
}s1;
void main()
struct student s1;
struct student *ptrstudent=&s1;
{
printf("enter details");
scanf("%s %d",&ptrstudent.name,&ptrstudent.rollno);
printf("%s %d",ptrstudent.name,ptrstudent.rollno);
}
