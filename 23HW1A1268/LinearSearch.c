//To search for the element linearly
#include<stdio.h>
int readArray(int X[],int n)
{
 for(int i=0;i<n;i++)
 {
  scanf("%d",&X[i]);
 }
}
int LinearSearch(int X[],int n)
{
 int i,k;
 printf("Enter the search element ");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
  if(k == X[i])
   return i;
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
 res = LinearSearch(A,n);
 if(res == -1)
  printf("Search is unsuccesful\n");
 else
  printf("Search is successful at %d\n",res+1);
}
