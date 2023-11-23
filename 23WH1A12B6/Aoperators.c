#include<stdio.h>
int main()
{

	int a,b,sum,dif,mul,rem;
	float div,c=2;
	int x,y,z;
	printf("\n Give 2 integers  ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	dif=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	
printf("\n sum=%d",sum);

printf("\n difference=%d",dif);
printf("\n product of %d,%d =%d",a,b,mul);
printf("\n sum=%d",a+b+sum);
printf("\n div=%f",div);
printf("\n remainder=%d",rem);	//printf("\n  %d",	);
	 
	 	return 0;

}
 
