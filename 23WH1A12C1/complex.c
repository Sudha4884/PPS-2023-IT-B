#include<stdio.h>
#include<string.h>
struct complex
{
 int real,img;
}s;
void main()
{
 printf("enter the real and img value: ");
 scanf("%d %d",&s.real,&s.img);
 printf("%d+i %d",s.real,s.img);
}
