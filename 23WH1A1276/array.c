#include<stdio.h>
 void main()
 {
    int i = 0,j=0;
    int A[i][j], B[i][j], C[i][j]; 
    int r , c ;
   

    printf("Enter the order of the matrix:");
    scanf("%d %d",&r,&c);  // both should have same order that why taking only one input
    //can take two order and comper it even

    printf("Enter the %d elements of matrix A: ",r*c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d ",&A[i][j]); 
        }
        printf("\n");
    }
    printf("The matrix A is:%d",A[i][j]);
    printf("Enter the %d elements of matrix B: ",r*c);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d ",&B[i][j]); 
        }
        printf("\n");
    }
    printf("The matrix B is:%d",B[i][j]);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
           
        }
        printf("\n");
    }


    printf("The resultant matrix on addition is %d",C[i][j]);
    
 }
 