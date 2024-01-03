#include<stdio.h>
void main()
{
    int A[10],i,n;
    int *ptr;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    ptr = &A[n-1];
    for(i = 9;i < -1;i--)
    {
        scanf("%d", ptr--);
    }
    ptr = A;
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr++));
    }
}