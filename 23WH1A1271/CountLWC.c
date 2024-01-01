#include <stdio.h>
#include <ctype.h>
void countLinesWordsChar(char *text, int *lines, int *words, int *characters) {
    *lines = *words = *characters = 0;
    int insideWord = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        (*characters)++;
        if (text[i] == '\n') {
            (*lines)++;
            insideWord = 0;
        }
        if (isspace(text[i])) {
            insideWord = 0;
        } else if (!insideWord) {
            insideWord = 1;
            (*words)++;
        }
    }
}
int main() {
    char inputText[1000];
    int lines = 0, words = 0, characters = 0;
	printf("Enter text:\n");
	while(fgets(inputText, sizeof(inputText), stdin) != NULL) {
        countLinesWordsChar(inputText, &lines, &words, &characters); 
        
     if(fgets(inputText, sizeof(inputText), stdin) != NULL) 
        countLinesWordsChar(inputText, &lines, &words, &characters);
        lines++;
        words++;
        characters++;
    printf("\nNumber of lines: %d\n", lines++);
    printf("Number of words: %d\n", words);
    printf("Number of characters: %d\n", characters);
    return 0;
}
}