#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct 


int main(){
    
    int numPlayers;

    printf("Enter the number of players in the cricket team: ");
    scanf("%d", &numPlayers);

    // struct Player* players = (struct Player*)malloc(numPlayers * sizeof(struct Player));
    // if (players == NULL) {
    //     printf("Memory allocation failed. Exiting...\n");
    //     exit(EXIT_FAILURE);
    // }

    // Initialize player information or load from a file
    // printf("Do you want to load player data from a file? (1 for yes, 0 for no): ");
    // int loadFromFile;
    // scanf("%d", &loadFromFile);

    // if (loadFromFile) {
    //     char fileName[50];
    //     printf("Enter the filename to load data from: ");
    //     scanf("%s", fileName);
    //     loadPlayersFromFile(players, numPlayers, fileName);
    // } else {
    //     for (int i = 0; i < numPlayers; i++) {
    //         printf("Enter name of player %d: ", i + 1);
    //         scanf("%s", players[i].name);
    //         players[i].runs = 0;
    //         players[i].wickets = 0;
    //     }
    // }

    int choice;
    // Main menu-driven loop
    do {

        // displaySystemState(players, numPlayers);

        // Display menu options
        printf("\nCricket Score Board\n");
        printf("1. Record Runs\n");
        printf("2. Record Wickets\n");
        printf("3. Display Filtered Players\n");
        printf("4. Search and Display Player\n");
        printf("5. Save Player Data to File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }while(1);

    return 0;
}