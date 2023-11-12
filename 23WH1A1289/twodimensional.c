#include <stdio.h>

int main() {
    int rows, cols , rows1 , cols1 ;
    scanf("%d%d%d%d", &rows,&cols, &rows1, &cols1);
    int arr[rows][cols];
    int arr1[rows][cols];
    int result[rows][cols];

    printf("Enter the elements of the array1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of the array2:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Array2:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Addition of arrays and printing the result
    printf("Result:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr[i][j] + arr1[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
     printf("Transpose of Result Array:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", result[j][i]);
        }
        printf("\n");
    }
    // Multiplication of arrays and printing the result
    printf("Product of Arrays:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols1; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += arr[i][k] * arr1[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }


    return 0;
}
