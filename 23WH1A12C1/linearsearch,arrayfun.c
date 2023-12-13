#include <stdio.h>
int readArray(int [], int );
void printArray(int [], int );
int linearSearch(int arr[], int n,int key);

void main()
{
    int Arr[100];
    int n;
    int key;
    n = readArray(Arr,n);
    printArray(Arr, n);
    printf("\nenter the value of key: ");
    scanf("%d",&key);

   int search = linearSearch(Arr,n,key);
    printf("the element %d found at %d",key,search);

}
int readArray(int X[], int n)
{

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);

    }
    return n;
}
void printArray(int X[], int n)
{
    printf("elements in array: ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",X[i]);
    }
}
int linearSearch(int X[], int n,int key)
{                                                                                               
  for(int i = 0;i<n;i++)
  {
     if(X[i]==key)
     {
     return i;
     }
  }
return -1;
}
