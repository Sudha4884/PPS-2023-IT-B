#include<stdio.h>
int main(){
    int arr[10][10],arr1[10][10],sarr[10][10],n,m;
    printf("ENTER THE VALUE OF m and n:\n");
    scanf("%d %d",&m,&n);
    printf("ENTER THE ELEMENTS IN 2D ARRAY:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
            
        }
    }
    printf("ENTER ELEMNTS OF MATRIX 2");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arr1[i][j]);
            
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        sarr[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d  ",sarr[i][j]);
            
        }printf("\n");
    }
    
    return 0;
}