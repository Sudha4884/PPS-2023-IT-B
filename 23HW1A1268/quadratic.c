//TO find the roots of quadratic form
#include<stdio.h>
void main(){
	int a,b,c,x1,x2;
	printf("enter the coefficients of quadratic form\n ");
	scanf("%d %d %d",&a,&b,&c);
	x1=((b*b)-4*a*c)/2*a ;
	x2=((b*b)+4*a*c)/2*a ;
	printf("The roots are\n x1 = %d \n x2 = %d",x1,x2);
	
}
