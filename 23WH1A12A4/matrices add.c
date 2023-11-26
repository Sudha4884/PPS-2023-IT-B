#include<stdio.h>
int main()
{

    int r,c,i,j, a[10][10], b[10][10], sum[10][10];
    printf("enter no. of rows : ");
    scanf("%d\n", &r);
    printf("enter no. of columns: ");
    scanf("%d\n", &c);
    
    printf("\n enter elementsof 1stmatrix : \n");
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     {
     printf(" enter elements of a %d%d: ", i+1,j+1);
     scanf("%d",&a[i][j]);
     }
     printf("\n enter elements of 2nd matrix : \n");
     for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     {
     printf("enter elements of b %d%d",i+1,j+1);
     scanf("%d", &b[i][j]);
     }
     for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     {
     sum[i][j]=a[i][j]+b[i][j];
     }
     printf("\n sum of two matrices: \n");
     for(i=0;i<r;i++)
     for(j=0;j<c;j++)
     {
     printf("%d", sum[i][j]);
     }
     {
     if(j==c-1)
     printf("\n\n");
     }

    return 0;
}
    