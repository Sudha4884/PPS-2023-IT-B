//C program that includes both encryption and decryption
// using the Caesar cipher:
#include <stdio.h>

// Function to perform the Caesar cipher encryption
void encrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; ++i) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = (text[i] - 'a' + shift) % 26 + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = (text[i] - 'A' + shift) % 26 + 'A';
        }
    }
}

// Function to perform the Caesar cipher decryption
void decrypt(char text[], int shift) {
    // Decryption is the same as encryption with a negative shift
    encrypt(text, -shift);
}

int main() {
    char message[100];
    int shift;

    // Input message and shift value
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);
    printf("Enter the shift value: ");
    scanf("%d", &shift);

    // Encrypt the message
    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);

    // Decrypt the message
    decrypt(message, shift);
    printf("Decrypted message: %s\n", message);

    return 0;
}

//This program takes a message as input, a shift value, encrypts
// the message, displays the encrypted message, then decrypts it 
 //and displays the decrypted message. The `decrypt` function uses 
 //the `encrypt` function with a negative shift to perform decryption.