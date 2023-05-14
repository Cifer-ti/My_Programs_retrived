//checks if a message is a palindrome
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void) {
    char mssge[MAX_LEN], *p = mssge, *q = mssge, ch;

    printf("Entter message to check if palindrome: ");
    while ((ch = toupper(getchar())) != '\n') {
        if ((ch >= 'A' && ch <= 'Z'))
           *p++ = ch;
    }

    for(p--; q <= p; q++, p--) {
        if (*q != *p)
           break;
    }

    if (q > p)
       printf("Palindrome\n");
    else
    printf("Not a palindrome\n");
    return 0;
}