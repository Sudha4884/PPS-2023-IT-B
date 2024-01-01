#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (!file1 || !file2 || !outputFile) {
        perror("Error opening files");
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, outputFile);
    }

    rewind(file1);

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, outputFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    FILE *readOutputFile = fopen("output.txt", "r");
    if (readOutputFile == NULL) {
        printf("Error: Cannot open output file for reading\n");
        return 1;
    }

    

    // Print the contents of readOutputFile
    while ((ch = getc(readOutputFile)) != EOF) {
        putchar(ch);
    }

    fclose(readOutputFile);

    return 0;
}
