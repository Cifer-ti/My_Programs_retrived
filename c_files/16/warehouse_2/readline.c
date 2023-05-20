#include <stdio.h>
#include "ctype.h"
#include "readline.h"

int read_line(char str[], int len) {

    int i = 0, ch;

    while (isspace((ch = getchar())))
     ;
    while (ch != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}