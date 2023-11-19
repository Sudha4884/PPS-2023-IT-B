#include <stdio.h>

int main() {
    // Declare variables of different data types
    int intValue;
    short int shortIntValue;
    long int longIntValue;
    long long int longLongIntValue;
    char charValue;
    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    // Read values from the user
    printf("Enter an integer value: ");
    scanf("%d", &intValue);

    printf("Enter a short integer value: ");
    scanf("%hd", &shortIntValue);

    printf("Enter a long integer value: ");
    scanf("%ld", &longIntValue);

    printf("Enter a long long integer value: ");
    scanf("%lld", &longLongIntValue);

    printf("Enter a character value: ");
    scanf(" %c", &charValue);

    printf("Enter a float value: ");
    scanf("%f", &floatValue);

    printf("Enter a double value: ");
    scanf("%lf", &doubleValue);

    printf("Enter a long double value: ");
    scanf("%Lf", &longDoubleValue);

    // Print the values
    printf("\nValues entered:\n");
    printf("Integer: %d\n", intValue);
    printf("Short Integer: %hd\n", shortIntValue);
    printf("Long Integer: %ld\n", longIntValue);
    printf("Long Long Integer: %lld\n", longLongIntValue);
    printf("Character: %c\n", charValue);
    printf("Float: %f\n", floatValue);
    printf("Double: %lf\n", doubleValue);
    printf("Long Double: %Lf\n", longDoubleValue);

    return 0;
}


