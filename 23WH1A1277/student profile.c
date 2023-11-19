#include<stdio.h>
#include<string.h>
struct student
{ 
    int Sno;
    char name[10];
    long int rollno;
};
int main ()
{
    struct student s1;
    printf("enter details of the student: ");
    scanf("%d%s%ld",&s1.Sno,s1.name,&s1.rollno);
    printf("Serial number : %d  \nName : %s  \nRoll No: %ld",s1.Sno,s1.name,s1.rollno);
    
    return 0;
}
