#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
int main() {
    char userChoice[10];
    int computerChoice;
    char *options[] = {"rock", "paper", "scissors"};
    srand(time(0));
    computerChoice = rand() % 3;  // 0: rock, 1: paper, 2: scissors

    // Get user's choice
    printf("Enter your choice (rock, paper, or scissors): ");
    scanf("%s", userChoice);

    // Convert user choice to lowercase for comparison
    for(int i = 0; userChoice[i]; i++)
    {
        userChoice[i] =tolower(userChoice[i]);
    }

    // Show computer's choice
    printf("Computer chose: %s\n", options[computerChoice]);

    // Determine the winner
    if (strcmp(userChoice, options[computerChoice]) == 0) 
    {
        printf("It's a tie!\n");
    } 
    else if ((strcmp(userChoice, "rock") == 0 && computerChoice == 2) ||(strcmp(userChoice, "paper") == 0 && computerChoice == 0) ||(strcmp(userChoice, "scissors") == 0 && computerChoice == 1))
    {
        printf("You win!\n");
    } 
    else if ((strcmp(userChoice, "rock") == 0 || strcmp(userChoice, "paper") == 0 || strcmp(userChoice, "scissors") == 0))
    {
        printf("Computer wins!\n");
    }
     else 
    {
        printf("Invalid input. Please enter rock, paper, or scissors.\n");
    }

    return 0;
}
