#include <stdio.h>

void find_smallest(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Smallest number: %d\n", min);
}

void find_largest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest number: %d\n", max);
}

void find_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum: %d\n", sum);
}

void find_average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Average: %.2f\n", (float)sum/n);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice;
    printf("1. Find smallest\n2. Find largest\n3. Find sum\n4. Find average\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            find_smallest(arr, n);
            break;
        case 2:
            find_largest(arr, n);
            break;
        case 3:
            find_sum(arr, n);
            break;
        case 4:
            find_average(arr, n);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
