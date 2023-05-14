//Prints a countdown
#include <stdio.h>

void print_count(int n) {
    printf("T minus %d and counting...\n", n);
}

int main(void) {
    int i;

    printf("Press Enter to print countdown...");
    getchar();
    for (i = 10; i >= 0; i--) {
        print_count(i);
    }
    return 0;
}