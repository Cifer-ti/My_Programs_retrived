//prints a one month calendar
#include <stdio.h>

int main(void) {
    int i, j, day, num_day;

    printf("Enter number of dats in month: ");
    scanf("%d", &num_day);
    printf("Enter day of week (1 = Su ... 7 = sa): ");
    scanf("%d", &day);

    printf(" Su Mo Tu We Th Fr Sa\n");
    for (i = 1; i < day; i++)
        printf("   ");
    for (j = 1; j <= num_day; j++, i++) {
        printf(" %2d", j);
        if (i % 7 == 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}