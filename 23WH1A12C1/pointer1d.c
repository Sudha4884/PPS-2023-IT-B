#include<stdio.h>
void main()
{
  int a[100],n,i,*ptr;
  ptr=a;
  scanf("%d",&n);
  printf("enter %d elements: ",n);
  for(i=0;i<n;i++)
  scanf("%d",a+i);
 for(i=0;i<n;i++)
   printf("%d", *(a+i));
} 
