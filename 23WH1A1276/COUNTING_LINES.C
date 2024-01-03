#include <stdio.h>

int main() {
    char ch;
    int characters = 0, words = 0, lines = 0;

    printf("Enter text ($):\n");
    while ((ch = getchar()) != '$') {
        characters++;

        if (ch == '\n' || ch == '\0') {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            words++;
        }
    }

    if (characters > 0) {
        words++;
        lines++;
    }

    printf("\nCharacters: %d\nWords: %d\nLines: %d\n", characters, words, lines);

    return 0;
}
