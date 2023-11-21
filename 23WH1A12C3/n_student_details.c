#include<stdio.h>
struct student
{
	int roll_no;
	char name[50];
	int marks;
}s[100];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%s%d",&s[i].roll_no,s[i].name,&s[i].marks); 
    }
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d",s[i].roll_no,s[i].name,s[i].marks);
	    printf("\n"); 
    }
}