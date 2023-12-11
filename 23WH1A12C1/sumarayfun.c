#include<stdio.h>
int sum(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
 sum+=a[i];
 return sum;
}
int main()
{
  int arr[100],i,n;
  printf("enter n value: ");
  scanf("%d",&n);
  printf("enter array elements: ");
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
   
    int s=sizeof(arr)/sizeof(arr[0]);
  printf("sum of array elements is  %d ",sum(arr,n));
  printf("\n Size of array is %d",s);
 return 0;
}
