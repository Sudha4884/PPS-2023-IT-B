#include <stdio.h>

#define SIZE 3 // Change this to change the size of the matrix

void printLower(int mat[SIZE][SIZE]) {
    printf("Lower Triangular Matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(j > i) {
                printf("0 ");
            } else {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

void printUpper(int mat[SIZE][SIZE]) {
    printf("Upper Triangular Matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(j < i) {
                printf("0 ");
            } else {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printLower(mat);
    printUpper(mat);
    return 0;
}
