//counts the number of vowels is a sentence
#include <stdio.h>
#include <ctype.h>

int main(void) {
    int num_vow = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = (toupper(getchar()))) != '\n') {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
           num_vow++;
    }
    printf("your Sentence has %d vowels\n", num_vow);
    return 0;
}