#include<stdio.h>
void main()
{
    int A[3][3],r,c,i,j,sum=0;
    printf("Enter the rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of A:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("\n%d",&A[i][j]);
        }
    }
    for(i=0,j=0;j<c,i<r;j++,i++)
    {
        sum += A[i][j];
    }
    printf("%d",sum);
}