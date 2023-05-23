#ifndef READLINE_H
#define READLINE_H

/**
 * readline: reads a line from a file
 *          (the file name is it's 3rd argument)
 *          then stores it in a string.
 *          if the line read exceeds the maximum 
 *          string lenght (the second argument), 
 *          it is truncated. Returns
 *          the length of the string.
*/
int readline(char str[], int n, FILE *fp);

#endif