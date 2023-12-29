#include <stdio.h>
#include <math.h>

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

double Mean(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

double Variance(int arr[], int size, double mean) {
    double sumSquaredDiff = 0;
    for (int i = 0; i < size; ++i) {
        sumSquaredDiff += pow(arr[i] - mean, 2);
    }
    return sumSquaredDiff / size;
}

double StandardDeviation(double variance) {
    return sqrt(variance);
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a positive size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    double mean = Mean(arr, size);
    double variance = Variance(arr, size, mean);
    double stdDeviation = StandardDeviation(variance);

    bubbleSort(arr, size);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    printf("Sorted Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
