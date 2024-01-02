#include<stdio.h>
void swap(int A[],int i,int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void bubbleSort(int A[],int n)
{
    int i,j;
    for(i = 0; i < n-1;i++)
    {
        for(j = 0; j < n-1; j++)
        {
            if(A[j] > A[j+1])
            {
                swap(A,j,j+1);
            }
        }
    }
}

void printArray(int A[],int size)
{
    int i = 0;
    for(i =0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[] = {5,1,4,2,8};
    int N = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,N);
    printArray(A,N);
    return 0;
}

