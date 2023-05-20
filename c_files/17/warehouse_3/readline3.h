#ifndef READLINE_H
#define READLINE_H

/**
 * read_line: Skips leading white-space characters, then
 *            reads the remainder of the input line and stores
 *            it in str. Truncates the line if its lenght 
 *            exceeds n (n is the max length that can be stored in the string).
 *              Returns the number of characters stored.
*/
int read_line(char str[], int n);

#endif
