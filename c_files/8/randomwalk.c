#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char grid[10][10] = {0},
        letter = 'A';
    int i= 0, j= 0, move,
        up, down, left, right;

    srand((unsigned) time(NULL));

    grid[i][j] = letter++;

    while (letter <= 'Z') {
        up = down = left = right = 0;

        /*prevents moving out of array and 
        * writting in an element that already has an assigned letter
        */
        if ((j + 1) < 10 && grid[i][j + 1] == 0)
            up = 1;
        if ((j - 1) >= 0 && grid[i][j -1] == 0)
            down = 1;
        if ((i + 1) < 10 && grid[i + 1][j] == 0)
            right = 1;
        if ((i - 1) >= 0 && grid[i - 1][j] == 0)
            left = 1;

        if (up + down + left + right == 0)
            break; 

        move = rand() % 4;

       switch (move) {
            case 0:
                if (up) {
                    grid[i][++j] = letter++;
                    break;
                }
            case 1:
                if (down) {
                    grid[i][--j] = letter++;
                }
            case 2:
                if (right) {
                    grid[++i][j] = letter++;
                }
            case 3:
                if (left) {
                    grid[--i][j] = letter++;
                }
            default:
                break;
       }
    }

    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (grid[i][j] == 0)
                grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}