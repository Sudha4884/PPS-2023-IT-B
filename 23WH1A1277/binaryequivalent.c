#include <stdio.h>
void decimalToBinary(int decimalNumber)
{
 if (decimalNumber >= 0 && decimalNumber <= 255)
 {
 for (int i = 7; i >= 0; i--)
 {
 int bit = (decimalNumber >> i) & 1;
 printf("%d", bit);
 }
 printf("\n");
}
 else
 printf("Input number must be between 0 and 255.\n");
}
void main()
{
 int decimalInput;
 scanf("%d", &decimalInput);
decimalToBinary(decimalInput);
}
