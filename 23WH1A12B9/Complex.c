#include<stdio.h>

struct complex
{
int real,img;
};
void main()
{
struct complex c1;
{
	printf("\n Enter a real, and imaginary nummber: ");
	scanf("%d %d",&c1.real,&c1.img);
}
{
	printf("\n %d+(%d)i",c1.real, c1.img);
}
}