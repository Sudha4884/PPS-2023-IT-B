#include<stdio.h>
int readArray(int []);
void printArray(int [],int);
void swap(int*,int*);
void select(int [],int);
void main()
{
int A[100],n,res;
n=readArray(A);
printf("\n Before sorting \n");
printArray(A,n);
select(A,n);
printf("\n After sorting selection sort \n");
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
void swap(int *x,int*y)
{
int t=*x;
*x=*y;
*y=t;
}
void select(int x[],int n)
{
int j,min;
for(int i =0; i<n;i++)
    {
    min = i;
     for(j=i+1;j<n;j++)
        if(x[min]>x[j])
           min = j; 
    swap(&x[min],&x[i]);
    }
}
