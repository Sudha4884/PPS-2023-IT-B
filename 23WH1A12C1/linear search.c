
#include<stdio.h>
int main()
{
 int i, a[20], n, key, flag = 0;
 printf("Enter the size of an array \n");
 scanf("%d", &n);
 printf("Enter the array elements");
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("Enter the key elements");
 scanf("%d", &key);
 for(i = 0; i < n; i++)
 {
  if(a[i] == key)
  {
   flag = 1;
   break;
  }
 }
 if(flag == 1)
  printf("The key elements is found at index %d", i + 1);
 else
  printf("The key element is not found in the array");
 return 0;
}