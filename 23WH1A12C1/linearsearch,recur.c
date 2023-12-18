#include <stdio.h>
// recursive function for linear search
/* if match found then return index of search key
   else return -1 */
int linear(int arr[], int n,int index,int key)
{
    if(index > n)
      return -1;
    else if (arr[index] == key)
      return index;
    else
      return  linear(arr, n, index+1, key);
}
// main function
int main()
{
  int array[] = {50, 90, 30, 70, 60};
  int key = 0;

  printf("Enter Search Element: ");
  scanf("%d", &key);
  int size = sizeof(array)/sizeof(array[0]);
  int index = linear(array, size, 0, key);
  
  if(index == -1)
    printf("%d Not Found\n", key);
  else
    printf("%d Found at Index = %d\n", key, index);

  return 0;
}
