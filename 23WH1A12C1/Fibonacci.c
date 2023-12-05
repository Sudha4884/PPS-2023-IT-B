#include<stdio.h>
void main()
{
int f1=0,f2=1,n,i,f3;

printf("enter n: ");
scanf("%d",&n);
printf("%d %d",f1,f2);
for(i=0; i<n; i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
printf(" %d ",f3);
}

}