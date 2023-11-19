#include <stdio.h>

int main() {
    int num, positiveSum = 0, negativeSum = 0;

    // Read 5 numbers from the user
    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; ++i) 
   {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);

        // Check if the number is positive or negative
        if (num > 0) {
            positiveSum += num; // Add positive number to positiveSum
        } else if (num < 0) {
            negativeSum += num; // Add negative number to negativeSum
        }
    }

    // Print the sum of positive and negative numbers
    printf("\nSum of positive numbers: %d\n", positiveSum);
    printf("Sum of negative numbers: %d\n", negativeSum);

    return 0;
}

