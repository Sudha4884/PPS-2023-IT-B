#include <stdio.h>
#include <string.h>
void insertSubstring(char *mainString, char *substring, int position) {
    int mainLength = strlen(mainString);
    int subLength = strlen(substring);
    if (position < 0 || position > mainLength) {
        printf("Invalid position for insertion.\n");
        return;
    }
    for (int i = mainLength; i >= position; --i) 
        mainString[i + subLength] = mainString[i];
    for (int i = 0; i < subLength; ++i) 
        mainString[position + i] = substring[i];
    printf("After insertion: %s\n", mainString);
}
void deleteCharacters(char *mainString, int position, int n) {
    int mainLength = strlen(mainString);
    if (position < 0 || position >= mainLength || n < 0) {
        printf("Invalid position or number of characters for deletion.\n");
        return;
    }
    for (int i = position; i < mainLength - n; ++i) {
        mainString[i] = mainString[i + n];
    }
    mainString[mainLength - n] = '\0';
    printf("After deletion: %s\n", mainString);
}
int main() {
    char mainString[100], subString[50];
    int position, n;
    printf("Enter the main string: ");
    scanf("%s", mainString);
    printf("Enter the sub-string: ");
    scanf("%s", subString);
    printf("Enter the position for insertion: ");
    scanf("%d", &position);
    insertSubstring(mainString, subString, position);
    printf("Enter the position for deletion: ");
    scanf("%d", &position);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);
    deleteCharacters(mainString, position, n);
    return 0;
}
