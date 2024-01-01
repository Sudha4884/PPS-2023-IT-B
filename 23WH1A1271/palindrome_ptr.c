#include<stdio.h>
#include<string.h>  
int isPalindrome(char *str) {     
    int length = strlen(str);     
    char *start = str;     
    char *end = str + length - 1;  
    while (start < end) {         
        if (*start != *end) {             
            return 0;}         
            start++;         
            end--;     }  
    return 1;
     }  
int main() {     
    char inputString[100];  
    printf("Enter a string: ");     
    scanf("%s", inputString);  
     if (isPalindrome(inputString)) {         
        printf("%s is a palindrome.\n", inputString);     } 
        else {         
            printf("%s is not a palindrome.\n", inputString);   
    return 0; 
    } 
}