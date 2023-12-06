#include<stdio.h>
int coprime(int,int);
int checkCoPrime(int,int);
void main()
{
int lb,ub;
printf("Enter the range:");
scanf("%d %d" ,&lb,&ub);
coprime(lb,ub);
}
int coprime(int lb,int ub)
{
int i,j,res,r;
for(i= lb;i <=ub;i++)
{
for(j = lb;j<=ub;j++)
{
res = checkCoPrime(i,j);
if(res == 1)
{
printf("%d %d\n ",i,j);
}
}
}
}
int checkCoPrime(int i,int j)
{
if(j%i !=0)
{
return 1;
}
else
{ 
return 0;
}
}
