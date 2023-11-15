#include<stdio.h>
struct student
 {
 char name[10];
 float cgpa;
}s1;
void main()
{
struct student s1 = {"nigama",10.0}; 
printf("%s %f",s1.name,s1.cgpa);

 } 
