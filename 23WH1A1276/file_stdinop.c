#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file
    file = fopen("smile.txt", "r");
    if (file == NULL) {
        printf("Cannot open file \n");
        return 0;
    }

    // Read contents from file
    ch = fgetc(file);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(file);
    }

    fclose(file);
    return 0;
}
