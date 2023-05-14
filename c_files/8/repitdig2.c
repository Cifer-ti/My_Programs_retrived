//prints the repeated digits in a number
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool repeated[10], 
         digit_seen[10];
    int num, i, n = 0, digit;

    printf("Enter number to check: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit_seen[digit]) 
            repeated[digit] = true;
        
        else 
            digit_seen[digit] = true;

        num /= 10;
    }

    printf("Repeated digit: ");
    for (digit = 0; digit < 10; digit++) {
        if (repeated[digit]) {
           printf("%d ", digit);
           n++;
        }
    }
    
    if (n == 0)
       printf("none");
    printf("\n");
    return 0;
} 