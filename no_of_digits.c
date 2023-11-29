#include<stdio.h>
int main()
{
	int n,s,r;
	s=0;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
	   n=n/10;
	   s=s+1;
	}
	printf("\n%d",s);
	return 0;
}
