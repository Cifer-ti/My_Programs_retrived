//calculates the euler's constant
#include <stdio.h>

int main(void) {
    int v = 0, n, i, j;
    double fact, e = 1.0;

    printf("Enter an number (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1, fact = 1; j <= i; j++) {
            fact *= j;
        }
        e += (1.0/fact);
    }
    printf("euler's constant is approximately = %f\n", e);
    return 0;
}