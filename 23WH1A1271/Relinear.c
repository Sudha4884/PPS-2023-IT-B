#include<stdio.h>
int readArray(int []);
void printArray(int [],int);
int Rlinear(int [],int,int);
void main()
{
int n,a[10],k,r;
n= readArray(a);
printArray(a,n);
printf("\n Enter Search element ");
scanf("%d",&k);
r = Rlinear(a,n,k);
if(r==-1)
   printf("\n Unsuccessful ");
else
   printf("\n Succesful at %d",r);
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
int Rlinear(int a[],int n,int k)
{
if(n==0)
   return -1;
else
   {
    if(a[n-1]==k)
	return n-1;
    else
	return Rlinear(a,n-1,k);
   }

}
