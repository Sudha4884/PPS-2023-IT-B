#include <stdio.h>
int main()
{
	int sum,rem,k,n;
	printf("Enter the n value : ");
	scanf("%d",&n);	
	rem = n%10;	
	k=n/100;	
	sum=rem+k;
	printf("Sum of first and last digit =%d",sum);
	return 0;
}
