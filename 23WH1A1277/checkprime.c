#include <stdio.h>
void main()
{
 int i,num,count=0;
 printf("Enter n: ");
 scanf("%d",&num);
 for(i=2;i<=num/2;i++)
 { if((num%i)==0)
 {
 count++;
 break;
 }
 }
 if(count==0 && num!=1)
 printf("Prime Number");
else
 printf("Not a prime");
}
