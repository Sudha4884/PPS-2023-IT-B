#include<stdio.h>
int readArray(int X[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }
}
int printArray(int X[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",X[i]);
    }
}
int InsertionSort(int X[], int n)
{
    int i,j,k;
    for(i=1; i<n; i++)
    {
        j = i-1;
        k = X[j];
        while(j>=0 && X[j]>X[i])
        {
            X[j] = X[i];
            X[i] = k;
            j--;
        }
    }
}
void main()
{
    int A[100],n,res;
    printf("Enter the number of entries: ");
    scanf("%d\n",&n);
    readArray(A,n);
    printf("\n");
    InsertionSort(A,n);
    printArray(A,n);
}