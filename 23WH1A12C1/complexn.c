#include<stdio.h>
#include<string.h>
struct complex
{ 
 int real,img;
};
struct complex *cptr,s;
void main()
{ 
 printf("enter real and img: ");
 scanf("%d %d",&s.real,&s.img);
 printf("%d+ i%d",s.real,s.img);
 cptr=&s;
 printf("\nenter real and img: ");
 scanf("%d %d",&cptr->real,&cptr->img);
 printf("complex num: %d+i%d",cptr->real,cptr->img);
}
 
