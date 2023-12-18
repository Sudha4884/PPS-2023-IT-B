#include<stdio.h>
int fibanocci(int n)
{
if(n<=1)
return n;
else
return fibanocci(n-1)+fibanocci(n-2);
}
void printfibanocciseries(int count){
printf("fibanocci series upto %d terms",count);
for(int i=0;i<count;i++){
printf("%d",fibanocci(i));
}
printf("\n");
}
int main()
{
int terms;
printf("enter terms for fibanocci series:");
scanf("%d",&terms);
if(terms<0)
{
printf("the number of terms should be non negative");
}
else
{
printfibanocciseries(terms);
}
return 0;
}

