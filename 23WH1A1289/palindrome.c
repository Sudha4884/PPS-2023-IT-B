#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    printf("Enter a string: ");
   gets(s);

    char s1[50];
    int count = 0;
    strcpy(s1, s);

  
    strrev(s1);

    if (strlen(s) == strlen(s1)) {
        for (int i = 0; i < strlen(s); i++) {
            if (s[i] == s1[i]) {
                count++;
            }
        }

        if (count == strlen(s)) {
            printf("%s is a palindrome\n", s);
        } else {
            printf("%s is not a palindrome\n", s);
        }
    } else {
        printf("%s is not a palindrome\n", s);
    }

    return 0;
}
