#include <stdio.h>
#include <string.h>

// Function to encrypt plain text using a Caesar cipher
void encryption(char plain_text[], int shift_key, char cipher_text[]) {
    const int length = strlen(plain_text);
    for (int i = 0; i < length; i++) {
        if (plain_text[i] >= 'a' && plain_text[i] <= 'z') {
            // Cipher text character = (Plain text character + Shift key) % 26
            int position = plain_text[i] - 'a';  // Get numerical position of plain text character
            int new_position = (position + shift_key) % 26;  // Apply shift key and wrap around if needed
            cipher_text[i] = 'a' + new_position;  // Convert back to character
        } else {
            // Keep non-alphabetical characters unchanged
            cipher_text[i] = plain_text[i];
        }
    }
    cipher_text[length] = '\0';  // Add null terminator to mark end of string
}

// Function to decrypt cipher text using a Caesar cipher
void decryption(char cipher_text[], int shift_key, char plain_text[]) {
    const int length = strlen(cipher_text);
    for (int i = 0; i < length; i++) {
        if (cipher_text[i] >= 'a' && cipher_text[i] <= 'z') {
            // Plain text character = (Cipher text character - Shift key + 26) % 26
            int position = cipher_text[i] - 'a';  // Get numerical position of cipher text character
            // Add 26 to avoid negative results when shifting back
            int new_position = (position - shift_key + 26) % 26;  // Undo shift key and wrap around if needed
            plain_text[i] = 'a' + new_position;  // Convert back to character
        } else {
            // Keep non-alphabetical characters unchanged
            plain_text[i] = cipher_text[i];
        }
    }
    plain_text[length] = '\0';  // Add null terminator to mark end of string
}

int main() {
    char cipher_text[1000];
    char plain_text[1000];

    // Get input from the user
    char message[1024];
    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);

    int shift;
    printf("Enter the shift key: ");
    scanf("%d", &shift);

    // Perform encryption and decryption
    encryption(message, shift, cipher_text);
    printf("Encrypted text: %s\n", cipher_text);

    decryption(cipher_text, shift, plain_text);
    printf("Decrypted text: %s\n", plain_text);

    return 0;
}







