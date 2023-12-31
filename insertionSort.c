#include<stdio.h>
void printArray(int A[],int size)
{
    int i = 0;
    for(i =0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void insertionSort(int A[],int n)
{
    int key,j;
    for(int i = 0;i <n; i++)
    {
        key = A[i];
        j = i-1;
        while(j >= 0 && A[j] > key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main()
{
    int A[] = { 12,54,66,78,45,8};
    int n = 6;
    printArray(A,n);
    insertionSort(A,n);
    printArray(A,n);
    return 0;
}
