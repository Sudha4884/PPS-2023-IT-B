#include <stdio.h>
#include <stdlib.h>
int countCharacter(FILE *file, char targetChar) {
    int count = 0;
    char currentChar;
    while ((currentChar = fgetc(file)) != EOF) {
       if (currentChar == targetChar) {
            count++;
        }
    }
    return count;
}
int main(int argc, char *argv[]) {
        if (argc != 3) {
        fprintf(stderr, "Usage: %s cntfile t\n", argv[0]);
        return EXIT_FAILURE;
    }
    char *filename = argv[1];
    char targetChar = argv[2][0]; 
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }
    int occurrences = countCharacter(file, targetChar);
    fclose(file);
    printf("The character '%c' occurs %d times in the file '%s'.\n", targetChar, occurrences, filename);
    return EXIT_SUCCESS;
}
