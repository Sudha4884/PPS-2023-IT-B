#include<stdio.h>
int main()
{
float p, t, r, si, ci;
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	
	 
	 si = (p * t * r)/100.0;
	
	 
	
	 printf("Simple Interest = %0.3f \n",si);
	 return(0);
}
    