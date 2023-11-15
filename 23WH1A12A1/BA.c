
/*read and print 1 student details*/
#include<stdio.h>
#include<string.h>
struct student
{
char Name[100];
int marks;
char gender;
long int phNo;
}s1;
void main()
{
printf("\nEnter Details of students s1\n");
scanf("%s %d %c %ld",s1.Name,&s1.marks,&s1.gender,&s1.phNo);
printf("%s %d %c %ld",s1.Name,s1.marks,s1.gender,s1.phNo);
}

