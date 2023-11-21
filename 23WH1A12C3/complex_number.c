#include<stdio.h>
struct complex
{
	int real,img;
};
int main()
{
	struct complex c1;
	scanf("%d%d",&c1.real,&c1.img);
	printf("%d+i(%d)",c1.real,c1.img);
}