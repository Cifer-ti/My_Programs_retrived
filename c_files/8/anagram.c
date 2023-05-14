//checks if two words are anagrams
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 30

int main(void) {
    char ch;
    int i, seen_letter[26] = {0},
        seen = 0;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n' && i < 27) {
        if(isalpha(ch))
            seen_letter[(tolower(ch)) - 'a']++;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n' && i < 27) {
        if(isalpha(ch))
            seen_letter[(tolower(ch)) - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (seen_letter[i] != 0)
            seen = 1;
    }

    if (seen)
        printf("Not annagrams\n");
    else printf("words are anagrams\n");

    return 0;
}
