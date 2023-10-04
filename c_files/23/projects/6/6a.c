/* Copies a text file from stdin and prints it to stdout replacing all 
   control characters except '\n' by '?' */

//using stirng fuction.
#include <stdio.h>
#include <string.h>

int main(void)
{
    int ch;

    while((ch = getchar()) != EOF) {

        if(strchr("\a\b\f\r\t\v", ch) == NULL)
            putchar(ch);
        else
            putchar('?');
    }

    return 0;
}