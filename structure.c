#include<stdio.h>
#include<string.h>
struct student
{
	char name[200];
	int roll;
	char dept[20];
	char sect;
};
struct student s1;
void main()
{
    strcpy(s1.name,"sai eshwari");
	s1.roll = 7;
	strcpy(s1.dept,"IT");
	s1.sect='B';
printf("%s\t%d\t%s\t%c",s1.name,s1.roll,s1.dept,s1.sect);
}
