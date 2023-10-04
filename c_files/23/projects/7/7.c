/* Counts the number of sentences in a text file(stdin) */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch = '\0', c = '\0';
    int n_sentence;

    while((ch = getchar()) != EOF) {
        if(strchr("!.?", c) != NULL && isspace(ch))
            n_sentence++;
        c = ch;
    }

    printf("NUmber of sentences: %d\n", n_sentence);
    return 0;
}