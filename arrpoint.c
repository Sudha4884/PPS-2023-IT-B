#include<stdio.h>
int main()
{
int arr[100],n,i,*aptr;
aptr=arr;
printf("enter the value of n");
scanf("%d",&n);
printf("enter values of 1d array");
for(i=0;i<n;i++)
{
scanf("%d",aptr++);
}
printf("printing the elements");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

