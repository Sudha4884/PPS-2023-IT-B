#include<stdio.h>
void main()
{
	int marks[5],n,sum;
	sum = 0;
	int i;
	printf("Enter the numbers:");
	for(i = 0; i < 5; i++)
	{
	 scanf("%d",&marks[i]);
	}
	for( i = 0; i< 5; i++)
	{
	 printf("%d ",marks[i]);
	 sum += marks[i];
	}
	printf("\n the sum of the array is %d",sum);
}
	
