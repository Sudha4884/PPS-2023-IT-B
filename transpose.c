#include<stdio.h>
void main()
{
    int a[2][2],i,j,r,c;
    printf("Enter the rows and column number:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }

    printf("the matrix A is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the matrix is:\n");
    for(j=0;j<c;j++)
    {
        for(i=0;i<c;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
