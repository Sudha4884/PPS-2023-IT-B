#include<stdio.h>
int sumofnaturalnumbers(int n){
if( n==0)
{
return 0;
}
else
{
return n + sumofnaturalnumbers(n-1);
}
}
int main(){
int limit;
printf("enter the limit:");
scanf("%d",&limit);

if(limit<0){
printf("sum is not defined for negative limits:\n");
}
else
{
printf("sum of natural numbers is %d is:%d\n",limit,
sumofnaturalnumbers(limit));
}
return 0;
}

