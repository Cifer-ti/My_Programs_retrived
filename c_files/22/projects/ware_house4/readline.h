#ifndef READLINE_H
#define READLINE_H

/**
 * readline: Skips leading whitespace, then reads input
 *           into str before reading, it checks if the number
 *           of characters read is greater than n if it is it truncates
 *           the rest. stops reading if encounters a new line character
 *           or an EOF. returns the length of the string.
*/
int read_line(char str[], int n);

#endif