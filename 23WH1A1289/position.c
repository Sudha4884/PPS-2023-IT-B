#include <stdio.h>
#include <string.h>

int main() {
    char S[100];
    char ch;
    
   gets(S);
   scanf("%c", &ch);

 
    int position = -1; 

    for (int i = 0; i < strlen(S); i++) {
        if (S[i] == ch) {
            position = i + 1; 
            break;
        }
    }

   
    if (position != -1) {
        printf("Character '%c' found at position: %d\n", ch, position);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
