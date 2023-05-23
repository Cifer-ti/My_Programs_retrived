#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int readline(char str[], int n, FILE *fp) {

    int ch, len = 0;

    while (isspace(ch = getc(fp)))
        ;
    
    while (ch != '\n' && ch != EOF) {

        if (len < n && isdigit(ch)) 
             str[len++] = ch;
             
        ch = getc(fp);
    }

    str[len] = '\0';
    return len;
}