 #include <stdio.h>

void convertToRoman(int num) {
    if (num < 1 || num > 50) {
        printf("Number out of range (1-50).\n");
        return;
    }

    // Arrays to store Roman numerals and their corresponding values
    int values[] = { 10, 9, 5, 4, 1 };
    char* numerals[] = { "X", "IX", "V", "IV", "I" };

    printf("Roman equivalent of %d is: ", num);

    for (int i = 0; i < 5; i++) {
        while (num >= values[i]) {
            printf("%s", numerals[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int num;

    // Input number
    printf("Enter a number between 1 and 50: ");
    scanf("%d", &num);

    // Call function to convert and print Roman equivalent
    convertToRoman(num);

    return 0;
}