#include<stdio.h>
void main()
{
    int A[2][2],B[2][2],r,c,i,j,count =0,k;
    printf("Enter the rows and columns:");
    scanf("%d %d",&r,&c);
    k = r *c;
    printf("Enter the elements of Matrix A:\n ");
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the matrix B:\n");
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i = 0;i < r;i++)
    {
        for(j = 0;j < c; j++)
        {
            if(A[i][j] == B[i][j])
            {
                count++;
                if(count = (k))
                {
                    printf("The matrix are equal");
                }
            }
            else
            {
                printf("The matrix is not equal");
                break;
            }
        }   
    }
        
}