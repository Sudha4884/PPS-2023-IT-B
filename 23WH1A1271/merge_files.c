#include <stdio.h>
int main(int argc, char *argv[]) {
        if (argc != 4) {
        printf("Usage: %s <file1> <file2> <output_file>\n", argv[0]);
        return 1;
    }
    FILE *file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        perror("Error opening file 1");
        return 1;
    }
    printf("Opened file 1: %s\n", argv[1]);
    FILE *file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        perror("Error opening file 2");
        fclose(file1);
        return 1;
    }
    printf("Opened file 2: %s\n", argv[2]);
    FILE *targetFile = fopen(argv[3], "w");
    if (targetFile == NULL) {
        perror("Error opening output file");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    printf("Opened output file: %s\n", argv[3]);
    char ch;
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, targetFile);
    }
        while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, targetFile);
    }
    fclose(file1);
    fclose(file2);
    fclose(targetFile);
    printf("Files merged successfully into %s.\n", argv[3]);
    return 0;
}
