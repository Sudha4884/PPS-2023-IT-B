#include<stdio.h>
struct student
{
char name[20];
int marks;
int rollno;
}s1,s2,s3;
void main()
{
struct student *sptr1,*sptr2,*sptr3;
sptr1 = &s1;
sptr2 = &s2;
sptr3 = &s3;
printf("Enter the details of student:");
scanf("%s %d %d",sptr1->name,&sptr1->marks,&sptr1->rollno);
printf("%s \n %d \n %d\n",sptr1->name,sptr1->marks, sptr1->rollno);
printf("Enter details of student:");
scanf("%s %d %d",sptr2->name,&sptr2->marks,&sptr2->rollno);
printf("%s\n%d\n%d\n",sptr2->name,sptr2->marks,sptr2->rollno);
}
