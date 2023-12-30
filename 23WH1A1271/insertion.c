#include<stdio.h>
int readArray(int []);
void printArray(int [],int);
void insert(int [],int);
void main()
{
int A[100],n,res;
n=readArray(A);
printf("\n Before sorting \n");
printArray(A,n);
insert(A,n);
printf("\n After sorting using Insertion sort: \n");
printArray(A,n);
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
void insert(int a[],int n)
{
int i,j,ele;
for(i=1;i<n;i++)
{
j=i-1;
ele = a[i];
while((j>=0) && (a[j]>=ele))
{
a[j+1]= a[j];
j--;
}
a[j+1]=ele;
}
}