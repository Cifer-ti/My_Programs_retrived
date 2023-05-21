#include <stdio.h>
#include "stackADT3.h"

int main(void) {
    
    stack s1, s2;
    int len1, len2;
    char *p;

    s1 = create();
    s2 = create();

    push(s1, "let's");
    push(s2, "go");
    
    len1 = length(s1);
    len2 = length(s2);
    printf("%d item(s) in s1\n%d item(s) in s2\n\n", len1, len2);

    p = pop(s1);
    printf("Popped %s from s1\n", p);
    push(s1, p);
    p = pop(s1);
    printf("Popped %s from s1\n", p);
    push(s2, p);
    push(s2, "sate");
    printf("pushed sate in s2\n\n");

    len1 = length(s1);
    len2 = length(s2);
    printf("%d item(s) in s1\n%d item(s) in s2\n\n", len1, len2);

    destroy(s1);

    while (!(is_empty(s2))) {
        p = pop(s2);
        printf("Popped %s from s2\n", p);
    }

    push(s2, "yet");
    make_empty(s2);
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);
    return 0;
}