#include <stdio.h>
struct employee
{
int id;
char name[10];
float salary;
char post [10];
} e1,e2,e3;
int main(){
struct employee e1 = {45,"ragul",45000,"manager"};
struct employee e2 = {34,"raghavi",50000,"lead"};
scanf("%d%s%f%s",&e3.id,e3.name,&e3.salary,e3.post);
printf("ID NAME SALARY DESIGNATION\n %5d %5s %5f %5s\n %5d %5s %5f %5s\n %5d %5s %5f %5s",e1.id,e1.name,e1.salary,e1.post,e2.id,e2.name,e2.salary,e2.post,e3.id,e3.name,e3.salary,e3.post);
return 0;
}
