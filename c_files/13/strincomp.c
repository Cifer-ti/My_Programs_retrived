#include <stdio.h>
#include <string.h>

#define EXIT_LEN 4
#define MAX_LEN 20

int main(void) {

    char word[MAX_LEN + 1], short_str[MAX_LEN + 1], long_str[MAX_LEN + 1];

    printf("Enter a word (length of 4 to terminat): ");
    scanf("%20s", word);

    strcpy(short_str, word);
    strcpy(long_str, word);

    while (strlen(word) != 4) {

        printf("Enter a word (length of 4 to terminat): ");
        scanf("%20s", word);

        if (strcmp(word, short_str) < 0) {
            strcpy(short_str, word);
        }

        if (strcmp(word, long_str) > 0) {
            strcpy(long_str, word);
        }
    }

    printf("smallest word: %s\n", short_str);
    printf("largest word: %s\n", long_str);

    return 0;
}