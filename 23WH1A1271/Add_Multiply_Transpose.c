#include <stdio.h> 
#include <stdlib.h>  
void addMatrices(int **a, int **b, int **c, int rows, int cols) { 
    for (int i = 0; i < rows; ++i) { 
        for (int j = 0; j < cols; ++j) { 
            c[i][j] = a[i][j] + b[i][j]; 
        } 
    } 
}   
void multiplyMatrices(int **a, int **b, int **c, int rows1, int cols1, int cols2) { 
    for (int i = 0; i < rows1; ++i) { 
        for (int j = 0; j < cols2; ++j) { 
            c[i][j] = 0; 
            for (int k = 0; k < cols1; ++k) { 
                c[i][j] += a[i][k] * b[k][j]; 
            } 
        } 
    } 
}   
void transposeMatrix(int **a, int **result, int rows, int cols) { 
    for (int i = 0; i < rows; ++i) { 
        for (int j = 0; j < cols; ++j) { 
            result[j][i] = a[i][j]; 
        } 
    } 
}  
int** allocateMatrix(int rows, int cols) { 
    int **matrix = (int **)malloc(rows * sizeof(int *)); 
    for (int i = 0; i < rows; ++i) { 
        matrix[i] = (int *)malloc(cols * sizeof(int)); 
    } 
    return matrix; 
}   
void freeMatrix(int **matrix, int rows) { 
    for (int i = 0; i < rows; ++i) { 
        free(matrix[i]); 
    } 
    free(matrix); 
}   
void inputMatrix(int **matrix, int rows, int cols) {  
    for (int i = 0; i < rows; ++i) { 
        for (int j = 0; j < cols; ++j) { 
            scanf("%d", &matrix[i][j]); 
        } 
    } 
}  
// Function to print a matrix 
void printMatrix(int **matrix, int rows, int cols) { 
    printf("Matrix:\n"); 
    for (int i = 0; i < rows; ++i) { 
        for (int j = 0; j < cols; ++j) { 
            printf("%d ", matrix[i][j]); 
        } 
        printf("\n"); 
    } 
}  
int main() { 
    int rows1, cols1, rows2, cols2;  
    printf("Enter the dimensions of the first matrix (rows columns): "); 
    scanf("%d %d", &rows1, &cols1);   
    printf("Enter the dimensions of the second matrix (rows columns): "); 
    scanf("%d %d", &rows2, &cols2);   
    if (cols1 != rows2) { 
        printf("Matrix multiplication is not possible with the given dimensions.\n"); 
        return 1; 
    }  
    // Allocate memory for matrices 
    int **A = allocateMatrix(rows1, cols1); 
    int **B = allocateMatrix(rows2, cols2); 
    int **resultMatrix = allocateMatrix(rows1, cols2); 
    int **transposeMatrix1 = allocateMatrix(cols1, rows1);  
    printf("Enter elements for the first matrix:\n"); 
    inputMatrix(A, rows1, cols1);  
    printf("Enter elements for the second matrix:\n"); 
    inputMatrix(B, rows2, cols2);  
    // Perform matrix addition 
    addMatrices(A,B, resultMatrix, rows1, cols1); 
    printf("\nMatrix Addition:\n"); 
    printMatrix(resultMatrix, rows1, cols1);  
    // Perform matrix multiplication 
    multiplyMatrices(A, B, resultMatrix, rows1, cols1, cols2); 
    printf("\nMatrix Multiplication:\n"); 
    printMatrix(resultMatrix, rows1, cols2);  
    // Perform matrix transpose 
    transposeMatrix(A, transposeMatrix1, rows1, cols1); 
    printf("\nTranspose of Matrix 1:\n"); 
    printMatrix(transposeMatrix1, cols1, rows1);  
    // Free allocated memory 
    freeMatrix(A, rows1); 
    freeMatrix(B, rows2); 
    freeMatrix(resultMatrix, rows1); 
    freeMatrix(transposeMatrix1, cols1);  
    return 0; 
}