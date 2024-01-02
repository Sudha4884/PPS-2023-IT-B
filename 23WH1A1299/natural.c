#include<stdio.h>
void main()
{
	natural(7);
}
void natural(int n)
{
	if(n<=0)
	return -1;
	else
	printf("%d  ",n);
	return natural(n-1);
}
