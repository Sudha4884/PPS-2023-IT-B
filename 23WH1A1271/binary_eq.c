#include <stdio.h>
int main()
{
     int num,num1,binary=0,rem,i=1;
     printf("\n Enter integer Number  :");
     scanf("%d",&num);
     num1=num;
     while(num!=0)
     {
     	rem=num%2;
     	binary=binary+i*rem;
     	num/=2;
     	i*=10;
	 }
     printf("\nThe Binary Equivqlent of %d is %d",num1,binary);
	 	
	return 1;
}