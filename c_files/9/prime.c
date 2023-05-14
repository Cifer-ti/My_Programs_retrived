//checks if a number is prime
#include <stdio.h>

#define true 1
#define false 0

typedef int Bool;

Bool is_prime(int num) {
    int divisor;
    
    if (num <= 1)
         return false;
    for (divisor = 2; divisor * divisor < num; divisor++) {
           if (num % divisor == 0)
              return false;
    }

    return true;
}

int main(void) {
    int num;

    printf("Enter number to check if prime: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is prime\n", num);
    else printf("%d is Not prime\n", num);

    return 0;
}