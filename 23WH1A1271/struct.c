#include<stdio.h>
struct student
{
    char name[20];
    int id;
    long int phno;
}s[3];
void main ()
{
int i;
for(i=0; i<3; i++)
{
    printf("\n Enter details of student \n");
    scanf("%s%d%ld", s[i].name, &s[i].id, &s[i].phno);
}
for(i=0; i<3; i++)
{
    printf("\n Details of student \n");
    printf("%s %2d %2ld", s[i].name, s[i].id, s[i].phno);
}
}
