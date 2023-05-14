#include <stdio.h>

int main(void){
    char ch;
    int length;

    printf("Enter text: ");
    while ((ch = getchar()) != '\n'){
        if (ch != ' ')
          length++;
    }
    
    printf("length is %d", length);

    return 0;
}