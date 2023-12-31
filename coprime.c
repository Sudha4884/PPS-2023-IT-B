

#include<stdio.h>
coprime(int lb,int ub)
{
int i,j;
for(i=lb;i<=ub;i++)
for(j=lb+1;j<=ub;j++)
if(checkcoprime(i,j))
printf("(%d,%d)",i,j);
}
int checkcoprime(int num1,int num2)
{
int i,hcf=0;
for(i=1;i<=num1;i++)
if(num1%i==0 && num2%i==0)
hcf++;
if(hcf==1)
return 1;
else
return 0;
}
void main()
{
int lb,ub;
printf("Enter range:");
scanf("%d%d",&lb,&ub);
coprime(lb,ub);
}
