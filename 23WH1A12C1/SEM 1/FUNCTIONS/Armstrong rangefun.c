#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the result
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is Armstrong
    if (result == num)
        return 1; // True
    else
        return 0; // False
}

// Function to print Armstrong numbers within a given range
void printArmstrongInRange(int start, int end) {
    printf("Armstrong numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; ++i) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    // Get user input for range
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    // Print Armstrong numbers within the given range
    printArmstrongInRange(start, end);

    return 0;
}