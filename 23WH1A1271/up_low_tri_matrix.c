#include<stdio.h>
void readArray(int[][10],int);
void printArray(int[][10],int);
void Upper_Matrix(int[][10],int);
void Lower_Matrix(int[][10],int);
void main()
{
    int a[10][10],i,n;
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);
    readArray(a,n);
    printf("\n Entered matrix\n ");
    printArray(a,n);
    Lower_Matrix(a,n);
    Upper_Matrix(a,n);
}
void readArray(int a[][10],int n)
{
    for(int i = 0; i<n;i++)
        for(int j = 0; j<n;j++)
            scanf("%d",&a[i][j]);
}
void printArray(int a[][10],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        	printf("%4d",a[i][j]);}
        printf("\n");}
}
void Lower_Matrix(int a[][10], int n) {
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j)
                printf("%d ", a[i][j]);
            else 
                printf("0 ");}
        printf("\n");}
}
void Upper_Matrix(int a[][10],int n)
{
    printf("\nUpper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (i <= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        printf("\n");}
}   
