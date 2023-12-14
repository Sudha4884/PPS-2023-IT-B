// To sort the elements using selection sort
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
int SelectionSort(int X[],int n)
{
 int i,j,min;
 for(i=0;i<n;i++)
 {
  min = i;
  for(j=i+1;j<n;j++)
  {
   if(X[min] > X[j])
    min = j;
  }
  swap(&X[i],&X[min]);
 }
}
int swap(int *x, int *y)
{
 int t=*x;
 *x = *y;
 *y = t;
}
void main()
{
 int A[100],n;
 printf("Enter the number of entries: ");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 SelectionSort(A,n);
 printArray(A,n);
}

