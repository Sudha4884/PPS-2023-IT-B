//Reading and printing students detaitls 
#include<stdio.h>
struct student {
    char name[40];
    char roll_no[10];
    int marks;
}s1;
int main(){
    struct student s2;
    s1.name[]= "Mythili";
    s1.roll_no[] = "23wh1a1268";
    s1.marks = 139;
    printf("enter the details of student 2 \n");
    scanf("%s %s %d \n", s2.name, s2.roll_no, &s2.marks);
    printf("Name \t Roll No. \t Marks \n");
    printf("%s %s %d \n", s1.name, s1.roll_no, s1.marks);
    printf("%s %s %d \n", s2.name, s2.roll_no, s2.marks);
}
