#include<stdio.h>
int readArray(int X[],int n)
{
 for(int i=0;i<n;i++)
 {
  scanf("%d",&X[i]);
 }
}

int LinearSearch(int X[],int n,int k)
{
 if(n==-1)
  return 0;
 else
 {
  if(X[n-1] == k)
   return n-1;
  else
   return LinearSearch(X,n-1,k);
 }
}

void main()
{
 int A[100],n,res,k;
 printf("Enter the number of entries: ");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 printf("Enter the search element ");
 scanf("%d",&k);
 res = LinearSearch(A,n,k);
 if(res == -1)
  printf("Search is unsuccesful\n");
 else
  printf("Search is successful at %d\n",res+1);
}