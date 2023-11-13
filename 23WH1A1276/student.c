#include<stdio.h>
#include<string.h>
struct student
{
 char gen;
 long int marks;
 char name[10];
}s1,s2,s3;

void main()
{
 s1.name = "Megha";
 s1.gen = 'F';
 s1.marks = 30;

printf("%s %c %ld",s1.name,s1.gen,s1.marks);

printf("Enter the student details:");
sacnf("%s %c %ld",&s2.name,&s2.gen,&s2.marks);
printf("%s %c %ld", s2.name,s2.gen,s2.marks);
}


