#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

// Function to print strong numbers up to a given range
void printStrongNumbers(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int startRange, endRange;

    // Input range from the user
    printf("Enter the start range: ");
    scanf("%d", &startRange);
    printf("Enter the end range: ");
    scanf("%d", &endRange);

    // Print strong numbers in the given range
    printStrongNumbers(startRange, endRange);

    return 0;
}