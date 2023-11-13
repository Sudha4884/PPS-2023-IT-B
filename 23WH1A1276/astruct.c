#include<stdio.h>
struct student
{
char name[20];
int roll;
int marks;
};
void main()
{
int n,i;
struct student s[10];
printf("Enter the no of students :");
scanf("%d",&n);
for(i = 0; i < n; i++)
{
printf("Enter the details of the student:");
scanf("%s %d %d",s[i].name,&s[i].roll,&s[i].marks);
}
for(i = 0; i < n; i++)
{
printf("%s %d %d\n",s[i].name,s[i].roll,s[i].marks);
}
}

