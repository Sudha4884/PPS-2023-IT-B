// Auto conversion and casting 
#include <stdio.h>

int main() {
    // Declare variables
    float float_value;
    int int_value;

    // Taking input from the user
    printf("Enter a numeric value: ");
    scanf("%f", &float_value);

    // Auto conversion (float to double)
    double double_value = float_value;
    printf("Auto Conversion (float to double): %.2lf\n", double_value);

    // Casting (double to int)
    int_value = (int)double_value;
    printf("Casting (double to int): %d\n", int_value);

    return 0;
}

//This C program takes a numeric value as input, auto-converts
 //it from a float to a double, and then casts it from a double to an integer.
//  The `%f` specifier is used with `scanf` to read the float value. 
 // The `(int)` syntax is used for casting the double to an integer.