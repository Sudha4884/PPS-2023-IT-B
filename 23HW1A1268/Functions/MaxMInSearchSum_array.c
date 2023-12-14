//To find the maximum, mininmum, sum and find the array elements
#include<stdio.h>
void readArray(int x[], int n)
{   
    printf("Enter the array elements \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
}
void printArray(int x[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", x[i]);
    }
}
int maxArray(int x[], int n)
{
    int i,max = x[0];
    for(int i=0; i<n; i++)
    {
        if(max<x[i])
            max = x[i];
    }
    return max;
}
int minArray(int x[], int n)
{
    int i,min = x[0];
    for(i=0; i<n; i++)
    {
        if(min>x[i])
            min = x[i];
    }
    return min;
}
int sumArray(int x[], int n)
{
    int i,sum =0;
    for(i=0; i<n; i++)
    {
        sum = sum + x[i];
    }
    return sum;
}
int findElement(int x[], int n)
{
    int k,i;
    printf("Enter a search element ");
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        if(k == x[i])
            return i;
    }
    return -1;
}

void main()
{
    int A[100],n;
    printf("Enter the toatal no. of entries ");
    scanf("%d",&n);
    readArray(A,n);
    printf("\n");
    printArray(A,n);
    printf("\n");
    printf("max is %d",maxArray(A,n));
    printf("\n");
    printf("min is %d",minArray(A,n));
    printf("\n");
    printf("sum is %d",sumArray(A,n));
    printf("\n");
    int res = findElement(A,n);
    if (res == -1)
        printf("Search is unsuccessful");
    else 
        printf("Search is successful at %d",res);
}
