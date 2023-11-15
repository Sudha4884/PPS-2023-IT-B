/*read and print n student
#include<stdio.h>
struct student
{
char name[100];
int marks;
char gender;
long int phno;
}s[n];
void main()
{
int i=0,n;
printf("enter an integer\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter student details");
scanf("%s %d %c %ld", s[i].name,&s[i].marks,&s[i].gender,&s[i].phno);
}
for(i=0;i<n;i++)
{
printf("\n%s %d %c %ld, s[i].name, s[i].marks, s[i].gender, s[i].phno);
}
}

