#include<stdio.h>
struct complex
{
	int real,imag;
}c[100];
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&c[i].real,&c[i].imag);
	}
	for(i=0;i<n;i++)
	{
		printf("%d+i(%d)",c[i].real,c[i].imag);
		printf("\n");
	}
}