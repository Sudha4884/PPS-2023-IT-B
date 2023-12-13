// To search elements through binary search
#include<stdio.h>
int readArray(int X[],int n)
{
 for(int i=0;i<n;i++)
 {
  scanf("%d",&X[i]);
 }
}
int BinarySearch(int X[], int n)
{
 int low,high,mid,k;
 printf("Enter search element: ");
 scanf("%d",&k);
 low = 0;
 high = n-1;
 while(low <= high)
 {
  mid = (low + high)/2;
  if(k == X[mid])
   return mid;
  else if(k < X[mid])
   high = mid - 1;
  else
   low = mid + 1;
  }
 return -1;
}
void main()
{
 int A[100],n,res;
 printf("Enter the number of entries: ");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 res = BinarySearch(A,n);
 if(res == -1)
  printf("Search is unsuccesful\n");
 else
  printf("Search is successful at %d\n",res);
}


