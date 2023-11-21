#include<stdio.h>
struct student
{
	int roll_no;
	char name[100];
	int marks;
};
int main()
{
	struct student s1;
	scanf("%d%s%d",&s1.roll_no,s1.name,&s1.marks);
	printf("Roll No\tName\tMarks",s1.roll_no,s1.name,s1.Marks);
}
