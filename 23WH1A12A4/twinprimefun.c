#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print twin prime numbers up to a given range
void printTwinPrimes(int start, int end) {
    printf("Twin Prime Numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d, %d)\n", i, i + 2);
        }
    }
}

int main() {
    int rangeStart, rangeEnd;

    // Get user input for the range
    printf("Enter the range (start end): ");
    scanf("%d %d", &rangeStart, &rangeEnd);

    // Print twin prime numbers within the given range
    printTwinPrimes(rangeStart, rangeEnd);

    return 0;
}
