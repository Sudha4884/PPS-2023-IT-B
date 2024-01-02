#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to accept player details and store in a file according to the selected game
void acceptPlayerDetails(char game[]) {
    FILE *file;
    char playerName[50], age[5], flatNo[10], mobile[15];
    
    printf("Enter player's name: \n");
    scanf("%s", playerName);
    
    printf("\nEnter player's age: \n");
    scanf("%s", age);
    
    printf("\nEnter player's flat number: \n");
    scanf("%s", flatNo);
    
    printf("\nEnter player's mobile number: \n");
    scanf("%s", mobile);
    
    file = fopen(strcat(game, ".txt"), "a"); // File created/stored with game name
    if (file == NULL) {
        printf("Error creating file.");
        exit(1);
    }
    
    fprintf(file, "Name: %s, Age: %s, Flat No: %s, Mobile: %s\n", playerName, age, flatNo, mobile);
    fclose(file);
}

// Function to display entries for a specific game
void displayEntries(char game[]) {
    FILE *file;
    char line[100];
    
    file = fopen(strcat(game, ".txt"), "r");
    if (file == NULL) {
        printf("No entries for this game yet.\n");
        return;
    }
    
    printf("Entries for %s:\n", game);
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
}

int main() {
    int choice;
    char games[4][15] = {"Chess", "Carom", "Badminton", "Tennis"};
    
    printf("Welcome to the sports competition!\n");
    printf("1. Player\n2. Organizer\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Select your game:\n");
        for (int i = 0; i < 4; i++) {
            printf("%d. %s\n", i + 1, games[i]);
        }
        printf("Enter your choice: ");
        scanf("%d", &choice);
        acceptPlayerDetails(games[choice - 1]);
    } else if (choice == 2) {
        printf("Select your game:\n");
        for (int i = 0; i < 4; i++) {
            printf("%d. %s\n", i + 1, games[i]);
        }
        printf("Enter your choice: ");
        scanf("%d", &choice);
        displayEntries(games[choice - 1]);
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}