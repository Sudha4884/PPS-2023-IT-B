/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void swap(int *x,int*y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
void bubblesort(int arr[],int n){
    for( int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                
            }
        }
    }
}
int main()
{
    int arr[]= {65,78,90,5,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("original array: ");
    for (int i=0;i<n;i++)
    {
    printf("%d",arr[i]);
}
    bubblesort(arr,n);
    printf(" \n sorted array:");
    for(int i=0;i<n;i++)
    {
    printf("%d",arr[i]);
    }
    return 0;
}
