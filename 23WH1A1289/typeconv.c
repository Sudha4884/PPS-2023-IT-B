#include <stdio.h>

int main() {
    
    int integerNumber;
    float floatNumber;

    
    printf("Enter an integer: ");
    scanf("%d", &integerNumber);

    printf("Enter a floating-point number: ");
    scanf("%f", &floatNumber);

    float result = integerNumber + floatNumber;
    printf("\nType Conversion:\n");
    printf("Result after adding: %f\n", result);

    int result1 = (int)floatNumber * integerNumber;
    printf("\nType Casting:\n");
    printf("Result after multiplication (with casting): %d\n", result1);

    return 0;
}
