//Encryption and decryption.
#include<stdio.h>
//declaration process.
void Encryption(char [],int);
void Decryption(char [],int);
void main(){
//initalization process.
    char message[500];
//taking input for the process to continue.
    printf("\n Enter a message to encrypt:");
    scanf("%s",message);
    int key;
    printf("\n Enter key to encrypt the message:");
    scanf("%d",&key);
    Encryption(message,key);
    printf("\n Encrypted message is %s",message);
    Decryption(message,key);
    printf("\n After decryption, message is %s",message);
}

//preparing function for Encrypting the code.
void Encryption(char message[500],int key){
    int i;
    char ch;
    for(i=0;message[i]!='\0';i++){
        //formula
        ch = ((int)message[i] - 'a' + key) % 26 + 'a';
        message[i]=ch; //storing the values
    }
}

//preparing function for Decrypting the code.
void Decryption(char message[500],int key){
    int i;
    char ch;
    for(i=0;message[i]!='\0';i++){
 //formula used 
        ch = ((int)message[i]  - 'a' - key + 26) % 26 + 'a';
        message[i]=ch; //storing the values
    }
}
