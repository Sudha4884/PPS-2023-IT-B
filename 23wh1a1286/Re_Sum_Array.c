#include<stdio.h>
int readArray(int []);
void printArray(int [],int);
int Array_sum(int[],int);
void main()
{
int i,n,a[10];
n = readArray(a);
printArray(a,n);
printf("\n The sum of array element is %d", Array_sum(a,n));
}
int readArray(int x[])
{
int n;
scanf("%d",&n);
printf("\n Enter %d no of elements ",n);
for(int i = 0; i<n;i++)
        scanf("%d",&x[i]);
return n;
}
void printArray(int x[],int n)
{
for(int i=0;i<n;i++)
printf("%5d",x[i]);
}
int Array_sum(int a[],int n)
{
if(n==0)
   return 0;
else
return a[n-1]+Array_sum(a,n-1);
}