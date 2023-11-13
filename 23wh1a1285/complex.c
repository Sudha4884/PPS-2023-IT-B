#include<stdio.h>
struct complex
{
int real,image;
};
struct complex *cptr,c1;
void main()
{
cptr=&c1;
printf("\n enter real,image of c1");
scanf("%d%d",&c1.real,&c1.image);
printf("the complex no. of is\n");
printf("%d+(%d)i",c1.real,c1.image);
printf("\n enter real,image\n");
scanf("%d%d",&cptr->real,&cptr->image);
printf("%d+(%d)i",cptr->real,cptr->image);
}

