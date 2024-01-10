#include<stdio.h>

int main()
{

    char text[500], ch;
    int key;
    char text1[500];
    int key1;
   
    printf("Enter a message to encrypt: ");
    scanf("%s", text);
   
    printf("Enter the key(enter 3 as per the given question): ");
    scanf("%d", & key);
   
    for (int i = 0; text[i] != '\0'; ++i)
    {
        ch = text[i];
        //checking whwther the given string is valid or not.
        if (isalnum(ch))
        {
            //Lowercase characters.
            if (islower(ch))
            {
                ch = (ch - 'a' + key) % 26 + 'a';
            }
            // Uppercase characters.
            if (isupper(ch))
            {
                ch = (ch - 'A' + key) % 26 + 'A';
            }
            //Numbers
            if (isdigit(ch))
            {
                ch = (ch - '0' + key) % 10 + '0';
            }
        }
        else
        {
            printf("Invalid Message, please enter message in a proper format ");
        }
        // Adding encoded answer.
        text[i] = ch;

    }
    printf("Encrypted message: %s\n", text);
   
    printf("Enter a message to decrypt(enter encrypted message): ");
    scanf("%s", text1);
   
    printf("Enter the key: ");
    scanf("%d", &key1);

    for (int i = 0; text1[i] != '\0'; ++i)
    {

        ch = text1[i];
        // Checking whether the given string is valid or not.
        if (isalnum(ch))
        {
            // Lowercase characters.
            if (islower(ch))
            {
                ch = (ch - 'a' - key1 + 26) % 26 + 'a';
            }
            // Uppercase characters.
            if (isupper(ch))
            {
                ch = (ch - 'A' - key1 + 26) % 26 + 'A';
            }
            // Numbers.
            if (isdigit(ch))
            {
                ch = (ch - '0' - key1 + 10) % 10 + '0';
            }
        }
        // Invalid character.
        else {
            printf("Invalid Message,please enter string properly or correctly");
        }
       
        text1[i] = ch;

    }

    printf("Decrypted message: %s", text1);

    return 0;
}