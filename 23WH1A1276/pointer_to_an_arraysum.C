#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;  // Pointer to the array

    printf("Enter elements in array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", ptr);
        sum += *ptr;
        ptr++;
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
