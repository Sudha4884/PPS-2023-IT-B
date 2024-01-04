 #include <stdio.h>

int romanToDecimal(char romanNumeral) {
    switch (romanNumeral) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        default:
            return 0; // Invalid Roman numeral
    }
}

int main() {
    char romanNumeral;
    int decimalEquivalent = 0;

    // Get the Roman numeral from the user
    printf("Enter a Roman numeral (I to L): ");
    scanf("%c", &romanNumeral);

    // Convert to decimal equivalent
    decimalEquivalent = romanToDecimal(romanNumeral);

    // Display the result
    if (decimalEquivalent != 0) {
        printf("Decimal equivalent: %d\n", decimalEquivalent);
    } 
else {
        printf("Invalid Roman numeral\n");
    }

    return 0;
}