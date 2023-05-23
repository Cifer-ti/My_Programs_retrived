#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n) {

    int ch, len = 0;

    while (isspace(ch = getchar()))
        ;
    
    while (ch != '\n' && ch != EOF) {

        if (len < n)
            str[len++] = ch;
        ch = getchar();
    }

    return len;
}