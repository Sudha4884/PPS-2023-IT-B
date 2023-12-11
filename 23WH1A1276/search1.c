//BINARY SEARCH METHOD TO SEARCH AN ELEMENT 
#include<stdio.h>
int readArray(int [],int );
int printArray(int [],int );
int binarySearch(int [],int,int);
int binarySearch(int x[],int key,int n)
{
    int low =0,count =0;
    int high = n;

    while(low <= high)
    {
        int mid = (low+high)/2;
        count++;
        if(x[mid]==key)
        {
            return mid;
        }
        else if (x[mid] <= key)
        {
            low = mid +1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
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

void main()
{
    int A[10],key,n,res;
    printf("Enter the size of array:");
    scanf("%d",&n);
    readArray(A,n);
    printArray(A,n);
    printf("\nEnter the value of key:");
    scanf("%d",&key);
    res = binarySearch(A, key,n);

    if(res == -1)
    {
        printf("Unsuccessful search");
    }
    else{
        printf("The index where it is found is %d",res);
    }
}