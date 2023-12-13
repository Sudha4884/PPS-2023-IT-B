//To sort the elements using bubble sort
#include<stdio.h>
int readArray(int X[],int n)
{
 for(int i=0;i<n;i++)
 {
  scanf("%d",&X[i]);
 }
}
int printArray(int X[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d\n",X[i]);
 }
}

int BubbleSort(int X[],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<=n-i-1;j++)
  {
   if(X[j] > X[j+1])
    swap(&X[j],&X[j+1]);
  }
 }
}
void swap(int *x,int *y)
{
 int t=*x;
 *x = *y;
 *y = t;
}

void main()
{
 int A[100],n,res;
 printf("Enter the number of entries: ");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 BubbleSort(A,n);
 printArray(A,n);
}
