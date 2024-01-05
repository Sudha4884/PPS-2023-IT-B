#include<stdio.h>
int printArray(int [],int);
int readArray(int [],int);
void main()
{
    int n,A[10];
    printf("Enter the range of array:");
    scanf("%d",&n);
    readArray(A,n);
    printArray(A,n);
}

int readArray(int X[],int n)
{
    int i;
    printf("Enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }
}

int printArray(int X[],int n)
{
    int i;
    printf("The elements of array are: ");
    for(i =0;i<n;i++)
    {
        printf("%d ",X[i]);
    }
}