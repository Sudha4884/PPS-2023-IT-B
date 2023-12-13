#include<stdio.h>
void printArray(int [],int );
int readArray(int [],int );

void main()
{
    int Arr[100];
    int n;
    int key;
    n = readArray(Arr,n);
    printArray(Arr, n);
}
int readArray(int x[], int n)
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    return n;
}
void printArray(int x[], int n)
{
    printf("In print array: ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
}
