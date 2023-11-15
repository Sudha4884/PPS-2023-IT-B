#include<stdio.h>
struct student
{
char name[10];
int rollno;

}s[20];
void main()
{
int i;
for(i=0;i<15;i++)
  {
printf("enter the details");
scanf("%s %d",s[i].name,&s[i].rollno);
printf("%s %d",s[i].name,s[i].rollno);
  } 
}
