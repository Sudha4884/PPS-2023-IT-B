#include <stdio.h>

int main() {
    int A[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *ptr = A;

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr++);
    }

    ptr = A;

    printf("Entered elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr++);
    }

    return 0;
}

