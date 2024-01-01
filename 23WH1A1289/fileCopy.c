#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file\n");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error: Cannot open destination file\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = getc(sourceFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, destinationFile);
    }

    // Close the destinationFile after writing
    fclose(destinationFile);

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file\n");
        return 1;
    }
    // Print the contents of sourceFile
     printf("contents  from the source file :\n");

    while ((ch = getc(sourceFile)) != EOF) {
        putchar(ch);
    }

    // Reopen the destinationFile for reading
    destinationFile = fopen("destination.txt", "r");
    if (destinationFile == NULL) {
        printf("Error: Cannot open destination file for reading\n");
        fclose(destinationFile);
        return 1;
    }
    printf("contents are copied from the source file to destination:\n");

   
    while ((ch = getc(destinationFile)) != EOF) {
        putchar(ch);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
