#include<stdio.h>
int printArray(int [],int);
int readArray(int [],int);
int addArray(int [],int [],int);
int compareArray(int [],int);
void main()
{
    int n,A[10],B[10];
    printf("Enter the range of array:");
    scanf("%d",&n);
    printf("The elemnets of 1st array: ");
    readArray(A,n);
    printArray(A,n);
    printf("The elements of 2nd array:");
    readArray(B,n);
    printArray(B,n);
    addArray(A,B,n);
    compareArray(A,n);
    compareArray(B,n);
}

int readArray(int X[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }
}

int printArray(int X[],int n)
{
    int i;
    for(i =0;i<n;i++)
    {
        printf("%d ",X[i]);
    }
    printf("\n");
}

int addArray(int X[],int Y[],int n)
{
    int i,sum = 0;
    for(i =0;i<n;++i)
    {
         sum += X[i] + Y[i];
    }
    printf("The sum of two arrays is %d \n",sum);
}

int compareArray(int X[],int n)
{
    int i,max = 0;
    int min =0;
    for (i =0; i<n;i ++);
    {
        if(max < X[i])
        {
            max = X[i];
        }
        else
        {
            min = X[i];
        }

    }
    printf("The maximum and minimum value of array is %d %d\n",max,min);

}
