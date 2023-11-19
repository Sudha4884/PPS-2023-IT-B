#include <stdio.h>

int main() {
    // Declare variables to store characters
    char char1, char2, char3;

    // Read three characters from the user
    printf("Enter three characters: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    // Print characters in reverse order
    printf("Reversed Order: %c %c %c\n", char3, char2, char1);

    // Print ASCII values
    printf("ASCII Values: %d %d %d\n", (int)char1, (int)char2, (int)char3);

    return 0;
}
