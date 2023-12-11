#include<stdio.h>
int=binarySearch(int[],int n)
res=binarySearch(A,n);
if(res==-1)
{
  printf("search is successful");
}
else
{
 printf("search is unsuccessful");
}
int binarySearch(int A[],int n)
{
 low=0;high=n-1;count=0;
 while(low<=high)
 {
  mid=(low+high)/2;
  count++;
  if(k==A[mid])
    printf("count=%d",count);
   return mid;
  else if(k<A[mid])
    high=mid-1;
  else
    low=mid+1;
 }
  printf("\n count=%d",count);
  return -1;
}
void main()
void binarysearch(int A[],int n)
{
 int k,n;
  printf("enter k and n values: ");
  scanf("%d %d",&k,&n);
}
