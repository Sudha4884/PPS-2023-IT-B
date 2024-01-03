#include<stdio.h>
struct student
{
char name[10];
int rollno;
float marks;
};
void main(){
struct student s1;
printf("\n enter student name,rollno,marks");
scanf("%s%d%f",s1.name,&s1.rollno,&s1.marks);
printf("\n  %s  %d  %f ",s1.name,s1.rollno,s1.marks);
} 