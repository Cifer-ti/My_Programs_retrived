//converts a message into BIFF talk
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 200

int main(void) {
    char ch [MAX_LEN], c;
    int n = 0;

    printf("Enter message: \n");
    while ((c = (toupper(getchar()))) != '\n') {

        switch (c) {
            case 'A': ch[n] = '4';
                break;
            case 'B': ch[n] = '8';
                break;
            case 'E': ch[n] = '3';
                break;
            case 'I': ch[n] = '1';
                break;
            case 'O': ch[n] = '0';
                break;
            case 'S': ch[n] = '5';
                break;
            default: ch[n] = c;
                break;
        }
        n++;
    }
    
    printf("In BIFF-SPEAK: %s!!!!!!!!!", ch);
    printf("\n");
    return 0;
}