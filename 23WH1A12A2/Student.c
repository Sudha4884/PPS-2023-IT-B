#include<stdio.h>
struct student
{
char Name[10];
long int roll_no;
float cgpa;
};
struct student *sptr,s1;
 
void main (){
     sptr=&s1;
     printf("Enter the details of the student");
     scanf("%s%ld%f",&sptr->Name,&sptr->roll_no,&sptr->cgpa);
     printf("\n The name of the student is %s \n The roll number of the student is %ld \n Overall cgpa of the student is %f",sptr->Name,sptr->roll_no,sptr->cgpa);
    
}