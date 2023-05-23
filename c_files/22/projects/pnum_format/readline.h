#ifndef READLINE_H
#define READLINE_H

/**
 * readline: reads the input from a file.
 *           Skips leading space, then checks
 *           if the what read is a digit it is stored
 *           in str else it is skiped. Truncates the
 *           line if it's length exceeds n.
 *           Returns the number of charcaters stored.
*/
int readline(char str[], int n, FILE *fp);

#endif