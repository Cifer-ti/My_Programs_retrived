//displays a number in a seven segiment display form
#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

//external variables
const int segment[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                            {0, 1, 1, 0, 0, 0, 0},
                            {1, 1, 0, 1, 1, 0, 1},
                            {1, 1, 1, 1, 0, 0, 1},
                            {0, 1, 1, 0, 0, 1, 1},
                            {1, 0, 1, 1, 0, 1, 1},
                            {1, 0, 1, 1, 1, 1, 1},
                            {1, 1, 1, 0, 0, 0, 0},
                            {1, 1, 1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 0, 1, 1}};
char digits[4][MAX_DIGITS * 4];
const int segment_grid[7][2] = {{0, 1},
                                {1, 2},
                                {2, 2},
                                {2, 1},
                                {2, 0},
                                {1, 0},
                                {1, 1}};

//prototypes
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/*
 * main: calls clears_digits_array, process_digit and prints_digits_array only
 *       once.
 */
int main(void) {
    
    char ch;
    int position = 0;

    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += 4;
        }
    }
    print_digits_array();

    return 0;
}

/*
 * clear_digits_array: clears the digits array with spaces.
 */
void clear_digits_array(void) {

    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

/*
 * process_digit: enters a 7-segment display representation of the digit into
 *                the digits array at position.
 */
void process_digit(int digit, int position) {

    int i, row, col;

    for (i = 0; i < 7; i++) {
        if (segment[digit][i]) {
            row = segment_grid[i][0];
            col = segment_grid[i][1] + position;
            digits[row][col] = i % 3 == 0 ? '_' : '|';
        }
    }
}

void print_digits_array(void) {

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        printf("\n\n");
    }
}