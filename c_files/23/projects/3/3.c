/* Copies the content of a file from stdin to stdout, capitalizing the
    first letters of each word. */
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    bool in_word = false;

    while((ch = getchar()) != EOF) {
        
        if(isalpha(ch) && !in_word) {
            putchar(toupper(ch));
            in_word = true;
        }

        else if(isspace(ch)) {
            putchar(ch);
            in_word = false;
        }

        else
            putchar(ch);
    }

    return 0;
}