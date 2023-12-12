//SELECTION SORT ALGORITHM
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

void selectionSort(int A[],int n)
 {
    int indexOfMin,temp;
    printf("Running selection sort...\n");
    for(int i =0; i < n-1; i++)
    {
        indexOfMin = i;
        for(int j=i+1; j <n; j++)
        {
            if(A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        //Swap
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
        
    }
 }

int main()
{
    int A[] = { 12,54,66,78,45,8};
    int n = 6;
    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);
    return 0;
}