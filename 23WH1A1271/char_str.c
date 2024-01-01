#include <stdio.h>  
int findCharacterPosition(const char *S, char ch) {     
    int position = -1;  
    for (int i = 0; S[i] != '\0'; ++i) {         
        if (S[i] == ch) {            
             position = i;             
             break;         } 
    }  
    return position; }  
int main() {     
    char inputString[100];     
    char searchCharacter;  
    printf("Enter a string: ");     
    scanf("%s", inputString);  
    printf("Enter a character to search for: ");     
    scanf(" %c", &searchCharacter);  
    int position = findCharacterPosition(inputString, searchCharacter);  
    if (position != -1) 
        printf("The character '%c' is found at position %d in the string.\n", searchCharacter, position);      
    else
        printf("The character '%c' is not found in the string.\n", searchCharacter); 
    return 0;
} 