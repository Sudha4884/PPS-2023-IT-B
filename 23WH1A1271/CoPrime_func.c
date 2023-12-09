#include<stdio.h>
int iscoprime(int,int);
void printCoPrime(int,int);
void main()
{
int num1,num2;
printf("\n Enter two numbers");
scanf("%d%d",&num1,&num2);
printCoPrime(num1,num2);
}
int iscoprime(int a,int b)
{
int i,hcf;
for(i=1;i<=a;i++)
   if(a%i==0 && b%i==0)
      hcf = i;
if(hcf==1)
return 1;
else
return 0;
}
void printCoPrime(int lb,int ub)
{
int num;
printf("\n The Co-Primes between %d and %d are \n",lb,ub);
for(int i=lb;i<=ub;i++)
{
for(int j=i+1;j<=ub;j++)
  if(iscoprime(j,i))
     {
     if(i==1)
     continue;
     printf("\n (%d, %d) are Co Primes ",i,j);
     }

}
}