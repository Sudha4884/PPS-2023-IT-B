/*#include <stdio.h>

int romanToDecimal(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        default: return -1;
    }
}

int main() {
    char roman;

    printf("Enter a Roman numeral (I, V, X, or L): ");
    scanf("%c", &roman);

    int decimal = romanToDecimal(roman);

    if(decimal == -1) {
        printf("Invalid Roman numeral.\n");
    } else {
        printf("The decimal equivalent of Roman numeral %c is %d.\n", roman, decimal);
    }
}*/

#include <stdio.h>

void printRoman(int number) {
    while (number != 0) {
        if (number >= 50) {
           printf("L");
           number -= 50;
        } else if (number >= 10) {
           printf("X");
           number -= 10;
        } else if (number >= 9) {
           printf("IX");
           number -= 9;
        } else if (number >= 5) {
           printf("V");
           number -= 5;
        } else if (number >= 4) {
           printf("IV");
           number -= 4;
        } else {
           printf("I");
           number -= 1;
        }
    }
}

int main() {
    int number;

    printf("Enter a number (1-50): ");
    scanf("%d", &number);

    if(number < 1 || number > 50) {
        printf("Invalid number.\n");
        return 1;
    }

    printRoman(number);
    printf("\n");

    return 0;
}
