#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {
    const char *suit_code[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven",
                               "Eight", "Nine", "Ten", 
                               "Jack", "Queen", "King", "Ace"};
    bool card_seen[13][4] = {false};
    int num_cards, suit, rank, i;

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    srand((unsigned) time(NULL));

    printf(" your hand:\n");
    for (i = 0; num_cards != 0; i++) {
 
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if (!card_seen[rank][suit]) {
            printf(" %s of %s\n", rank_code[rank], suit_code[suit]);

            card_seen[rank][suit] = true;
            num_cards--;
        }
    }

    printf("\n");
    return 0;
}