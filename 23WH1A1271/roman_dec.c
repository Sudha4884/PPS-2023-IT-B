#include <stdio.h>
int romanToDecimal(char roman[]) {
    int decimal = 0;
    int i;
    for (i = 0; roman[i] != '\0'; i++) {
        switch (roman[i]) {
            case 'I':
                if (roman[i + 1] == 'V' || roman[i + 1] == 'X') decimal -= 1;
                else decimal += 1;
                break;
            case 'V':
                decimal += 5;
                break;
            case 'X':
                if (roman[i + 1] == 'L' || roman[i + 1] == 'C') decimal -= 10;
                else decimal += 10;
                break;
            case 'L':
                decimal += 50;
                break;}
    }
    return decimal;
}
int main() {
    char roman[100];
    printf("Enter a Roman numeral (I to L): ");
    scanf("%s", roman);
    int decimalEquivalent = romanToDecimal(roman);
    printf("Decimal equivalent: %d\n", decimalEquivalent);
    return 0;
}
