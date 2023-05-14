//picks random cards from a standard deck
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define false 0
#define true 1

typedef int Bool;

int main(void){
    const char suit_code[] = {'s', 'd', 'h', 'c'};
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9',
                            't', 'j', 'k', 'q', 'a'};
    Bool card_in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    char cmd;

    printf("_____________This program picks random cards from a standard deck_____________\n\n");

    do {
      printf("Enter number of cards in and: ");
      scanf("%d", &num_cards);

// passing the return value of time() to srand to prevent the picking of same cards each time program runs   
      srand((unsigned) time(NULL));  

      printf("cards in hand: ");
    
      while (num_cards > 0){

        rank = rand() % NUM_RANKS;
        suit = rand() % NUM_SUITS;

//using the asigned number of rank and suit to subscript the boolean type array to check if it is false preventing repeating of cards picked
//and printing the rank and suit code in the position of subscript and also setting the boolean array of position to true 
        if (!(card_in_hand[suit][rank])){

            printf("%c%c  ", rank_code[rank], suit_code[suit]);
            card_in_hand[suit][rank] = true;
            num_cards--;
        }
     }

      printf("do you want to pick another round (Y/N)? ");
      scanf(" %c", &cmd);
    } while (cmd == 'Y' || cmd == 'y');

    printf("\n");
    return 0;
}