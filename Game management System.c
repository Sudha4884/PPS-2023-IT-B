/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

struct Player {
    char name[MAX_LEN];
    char age[MAX_LEN];
    char flatNo[MAX_LEN];
    char mobileNumber[MAX_LEN];
};

void savePlayerDetails(char game[], struct Player player) {
    FILE *file;
    char filename[MAX_LEN];
    sprintf(filename, "%s_players.txt", game);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    fprintf(file, "%s,%s,%s,%s\n", player.name, player.age, player.flatNo, player.mobileNumber);

    fclose(file);

    printf("Player details saved successfully.\n");
}

void displayEntries(char game[]) {
    FILE *file;
    char filename[MAX_LEN];
    char line[MAX_LEN];
    sprintf(filename, "%s_players.txt", game);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("No entries found for %s.\n", game);
        return;
    }

    printf("Entries for %s:\n", game);
    while (fgets(line, MAX_LEN, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    int choice;
    char game[MAX_LEN];
    struct Player player;

    while (1) {
        printf("Player Organizer\n");
        printf("1. Enter Player Details\n");
        printf("2. Display Entries for a Game\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Select your game (Chess/Carom/Badminton/Tennis): ");
                scanf("%s", game);
                printf("Enter player's name: ");
                scanf("%s", player.name);
                printf("Enter player's age: ");
                scanf("%s", player.age);
                printf("Enter player's flat number: ");
                scanf("%s", player.flatNo);
                printf("Enter player's mobile number: ");
                scanf("%s", player.mobileNumber);
                savePlayerDetails(game, player);
                break;

            case 2:
                printf("Select your game (Chess/Carom/Badminton/Tennis): ");
                scanf("%s", game);
                displayEntries(game);
                break;

            case 3:
                printf("Exiting. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}