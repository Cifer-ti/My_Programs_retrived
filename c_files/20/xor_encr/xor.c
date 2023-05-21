//performs xor encryption on a file
#include <stdio.h>
#include <ctype.h>

#define key '&'

int main(void) {

    int org_char, new_char;

    while ((org_char = getchar()) != EOF) {

        new_char = org_char ^ key;
        if (isprint(org_char) && isprint(new_char))
            putchar(new_char);
        else
            putchar(org_char);
}

    return 0;
}