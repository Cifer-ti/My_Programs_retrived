//checks a number for repeated digit
#include <stdio.h>

#define false 0
#define true 1

typedef int Bool;

int main(void){
    int digit;
    long num;
    Bool digit_seen[10] = {false};

    printf("This program  checks a number for repeated numbers\n\n");
    printf("Enter number to check for repeated digit: ");
    scanf("%ld", &num);

    while (num != 0){
        digit = num % 10;

        if (digit_seen[digit]){
            break;
        }
        else digit_seen[digit] = true;

        num /= 10;

    }

    if (num == 0){
        printf("No repeated digit found");
    }
    else printf("Repeated digit found");

    printf("\n");

    return 0;
}