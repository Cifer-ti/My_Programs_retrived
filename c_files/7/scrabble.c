//computes the number of points of a word in a game of scrabble
#include <stdio.h>
#include <ctype.h>

int main(void){
    int points = 0;
    char word;
    
    printf("This program computes the points of a scrabble word\n\n");
    printf("Enter scrabble word: ");
    while ((word = getchar()) != '\n')

    switch (toupper(word)) {
    case 'A': case 'E': case 'I': case 'L': case 'N':
    case 'O': case 'R': case 'S': case 'T': case 'U':
        points++;
        break;

    case 'D': case 'G':
       points += 2;
       break;
    
    case 'B': case 'C': case 'M': case 'P':
       points += 3;
       break;

    case 'F': case 'H': case 'v': case 'W': case 'Y':
      points += 4;
      break;

    case 'K':
       points += 5;
       break;

    case 'J': case 'X':
      points += 8;
      break;

    case 'Q': case 'Z':
      points += 10;
      break;

    default:
        break;
    }

    printf("scrabble value = %d\n", points);
}