#include <stdio.h>

#define N 10

int main(void) {
    int occurence[N] = {0}, digit;
    long num;

    printf("Enter number to check for repetition: ");
    scanf("%ld", &num);

    while (num > 0) {
        while ( num > 0) {
            digit = num % 10;
            occurence[digit]++;

            num /= 10;
        }

    printf("digit:\t    0 1 2 3 4 5 6 7 8 9\n");
    printf("occurences:");
    for (int i = 0; i < N; i++) {
        printf("%2d", occurence[i]);
        occurence[i] = 0;
    }
    printf("\n");
    printf("Enter number to check for repetition: ");
    scanf("%ld", &num);
    
    }

    printf("\n");
}