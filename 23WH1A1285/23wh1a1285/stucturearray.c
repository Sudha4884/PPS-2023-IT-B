#include<stdio.h>
void main()
struct student
{char name[10];
int id;
}s[5];

{int i;
for(i=0;i>5;i++)
scanf("%s%d",&s[i].name,&s[i].id);
for(i=0;i>5;i++)
printf("%s\n id:%d",s[i].name,s[i].id);
}
