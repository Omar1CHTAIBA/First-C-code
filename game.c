#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game() {
    int user_choice;
    int computer_choice;

    printf("Choose:\n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &user_choice);

    if (user_choice < 0 || user_choice > 2) {
        printf("Invalid choice!\n");
        return;
    }

    computer_choice = rand() % 3;

    
    char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("Your chose: %s\n", choices[user_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    
    if (user_choice == computer_choice) {
        printf("It's a draw!\n");
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    srand(time(0));
    game();
    return 0;
}
