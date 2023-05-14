//simulates the game of craps
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    int win, lose;
    char cmd;

    srand((unsigned) time(NULL));
    do {
        
        if (play_game()) {
            printf("you win! :)\n");
            win++;
        }
        else { 
            printf("you lose? :(\n");
            lose++;
        }   
        printf("play again? ");
        scanf(" %c", &cmd);
    }while (cmd == 'y' || cmd == 'Y');

    printf("wins: %d   losses: %d\n", win, lose);
    return 0;
}

/* roll_dice: picks a random number between 1 and 6 
* for the 2 dice
*/
int roll_dice(void) {
    int num1, num2;

    num1 = rand() % 6 + 1;
    num2 = rand() % 6 + 1;

    return (num1 + num2);
}

/* play_game: uses the return value of roll dice
* to determine if the user wins or losses based on 
* certain criterias
*/
bool play_game(void) {
    int dice_value, point;

    dice_value = roll_dice();
    
    printf("you rolled: %d\n", dice_value);

    if (dice_value == 7 || dice_value == 11)
        return true;
    if (dice_value == 2 || dice_value == 3 || dice_value == 12)
        return false;

    point = dice_value;
    printf("your point is %d\n", point);
    
    while (dice_value = roll_dice()) {

        printf("you rolled %d\n", dice_value);
        if (dice_value == 7) {
            return false;
        }

        if (dice_value == point) {
            return true;
        }
    }
ame();
}