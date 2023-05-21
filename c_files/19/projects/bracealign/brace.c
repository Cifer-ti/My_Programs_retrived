//checks if paranthesis and braces are properly nested
#include <stdio.h>
#include "stackADT.h"

int main(void) {

    stack s1;
    char brace;

    s1 = create();

    printf("Enter paranthesis/brace: ");
    while ((brace = getchar()) != '\n') {
        if (brace == ')' && pop(s1) != '(') {
            printf("braces/paranthesis are not well nested.\n");
            return -1;
        }
        
        else if (brace == '}' && pop(s1) != '{') {
            printf("Paranthesis/paranthesis are not well nested\n");
            return -1;
        }

        else if (brace == '(' || brace == '{')
            push(s1, brace);
    }

    if (!is_empty(s1)) {
        printf("braces/paranthesi are not well nested.\n");
        return -1;
    }

    printf("Braces/Paranthesis are nested properly\n");
    return 0;
}