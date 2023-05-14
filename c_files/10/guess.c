//ask user to guess a secret number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int secret_number;

void initialize_number(void);
void set_secret_number(void);
void read_guess(int secret_number);

int main(void) {
    char cmd;

    initialize_number();
    do {
        set_secret_number();
        printf("A new secret number has been choosen\n\n");
        read_guess(secret_number);

        printf("\nWill you like to play again? ");
        scanf(" %c", &cmd);
    } while (cmd == 'Y' || cmd == 'y');
   
   return 0;
}

//initialize_number: initializes the random number generator
void initialize_number(void) {
    srand((unsigned) time(NULL));
}

//set_secret_number: sets the secret number
void set_secret_number(void) {
    secret_number = rand() % MAX_NUMBER + 1;
}

//read_guess: reads the user's guess and determines if it matches secrete number
void read_guess(int secret_number) {
    int guess, num_guess = 1;

    for (; ;) {
        printf("Enter guess: ");
        scanf("%d", &guess);

        if (guess < secret_number)
           printf("Too low try again\n");
        
        if (guess > secret_number)
           printf("Too high try again\n");

        if (guess == secret_number)
           break;
        
        num_guess++;
    }

    printf("You win in %d tries!", num_guess);
}