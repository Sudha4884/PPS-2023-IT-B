#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 0;
    }

    targetFile = fopen("target.txt", "w");
    if (targetFile == NULL) {
        printf("Unable to open target file.\n");
        return 0;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), targetFile);
    }

    printf("File copied and converted to uppercase successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
