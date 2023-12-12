#include<stdio.h>
int main()
{
 int n,i,m=0,count=0;    
printf("Enter the number : \n");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not a prime");    
count=1;    
break;    
}    
}    
if(count==0)    
printf("Number is a prime");     
return 0;
}