#include <stdio.h>
void main() {
 float floatValue;
 int intValue_auto, intValue_cast;
 printf("Enter a floating-point number: ");
 scanf("%f", &floatValue);
 intValue_auto = floatValue;
 intValue_cast = (int)floatValue;
 printf("Original floating-point value: %f\n", floatValue);
 printf("Converted to integer (auto conversion): %d\n", intValue_auto);
 printf("Converted to integer (casting): %d\n", intValue_cast);
}
