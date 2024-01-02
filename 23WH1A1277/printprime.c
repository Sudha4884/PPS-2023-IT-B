#include <stdio.h>
void main()
{
 int i,n,num,count;
 printf("Enter n: ");
 scanf("%d",&n);
 printf("Prime numbers between 1 to n are: ");
 for(num = 1;num<=n;num++){
 count = 0;
 for(i=2;i<=num/2;i++){
 if(num%i==0){
 count++;
 breakk;
 }
 }
 if(count==0 && num!= 1)
 printf("%d ",num);
 }
}
