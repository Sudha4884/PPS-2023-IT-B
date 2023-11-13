#include <stdio.h>
struct student {
char id[9];
char name [30];
double phno;
}s[5];
int main(){
for(int i = 0;i<5;i++){
printf("\nenter id of student");
scanf("%s",s[i].id);
printf("\nenter name of the student");
scanf("%s",s[i].name);
printf("\nenter phno of the student");
scanf("%lf",&s[i].phno);
}
for(int i = 0;i<5;i++){
printf("id of %d:%s\n",i+1,s[i].id);
printf("name of %d:%s\n",i+1,s[i].name);
printf("phno od %d:%.0lf\n",i+1,s[i].phno);
}
return 0;

}
