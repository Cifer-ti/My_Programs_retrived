//Reads a message entered and reverses it
#include <stdio.h>


int main(void) {

    char msg[100], *p = msg, ch;
    
    printf("Enter message: ");
    while ((ch = getchar()) != '\n')
          *p++ = ch;

    printf("Reversed: ");
    for (; p >= msg; p--)
        printf("%c", *p);
    
    printf("\n");
    return 0;
}
