#include <stdio.h>

int main() {
    float floatNumber;

    // Input a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &floatNumber);

    // Automatic type conversion (float to int)
    int intResultAuto = floatNumber;

    // Type casting (float to int)
    int intResultCast = (int)floatNumber;

    // Display results
    printf("\nResults:\n");
    printf("Original floating-point number: %.2f\n", floatNumber);
    printf("After auto conversion (float to int): %d\n", intResultAuto);
    printf("After casting (float to int): %d\n", intResultCast);

    return 0;
}