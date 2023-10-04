/* Copies a text file from stdin and prints it to stdout replacing all 
   control characters except '\n' by '?' */

//using ctype fuction.
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int ch;

    while((ch = getchar()) != EOF) {

        if(iscntrl(ch) && ch != '\n')
            putchar('?');
        else  
            putchar(ch);
    }

    return 0;
}