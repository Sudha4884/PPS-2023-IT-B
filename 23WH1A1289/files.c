#include <stdio.h>

void main() {
    FILE *fp;
    char ch;

    
    fp = fopen("intro.txt", "w");
    
    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    
    fputs("we are Indians",fp);

    
    fclose(fp);

    
    fp = fopen("intro.txt", "r");

    if (fp == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    printf("the text entered in the file is: ");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    
    fclose(fp);
}
