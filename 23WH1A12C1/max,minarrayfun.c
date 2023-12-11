#include<stdio.h>
int getMin(int arr[],int n)
{
 int res=arr[0],i;
 for(i=1;i<n;i++)
 res=min(res,arr[i]);
 return res;
}
int getMax(int arr[],int n)
{
  int res=arr[0],i;
 for(i=1;i<n;i++)
 res=max(res,arr[i]);
 return res;
}
int main()
{
 int arr[]={12,1234,45,67,1}
 int n=sizeof (arr)/sizeof arr[0];
 printf("min element of array: ",getMin(arr,n));
  printf("max element of array: ",getMax(arr,n));

 return 0;
}
