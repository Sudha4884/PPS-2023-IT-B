#include <stdio.h>

int main() {

int decimal, quotient, remainder, i;

int binary[8] = {0}; // initialize all elements of the array to 0

printf("Enter a decimal number between 0 and 255: ");

scanf("%d", &decimal);

quotient = decimal;

// Calculate the binary digits of the number

for (i = 0; i < 8 && quotient > 0; i++) {

remainder = quotient % 2;

binary[i] = remainder;

quotient = quotient / 2;

}

// Print the binary digits in reverse order

printf("The binary equivalent of %d is: ", decimal);

for (i = 7; i >= 0; i--) {

printf("%d", binary[i]);

}

return 0;

}

