#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num < 2) {
        return false; 
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}
bool linearSearch_FirstPrime(const int arr[], int size, int *result) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            *result = arr[i];
            return true; 
        }
    }
    return false; 
}
int main() {
    int size,result;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i <size; i++) {
        scanf("%d", &numbers[i]);
    }
    if (linearSearch_FirstPrime(numbers, size, &result)) 
        printf("First occurrence of a prime number: %d\n", result);
    else 
        printf("No prime number found in the array.\n");
    return 0;
}
