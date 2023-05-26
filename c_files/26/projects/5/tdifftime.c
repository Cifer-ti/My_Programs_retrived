/* Determines the difference between two dates */

#include <stdio.h>
#include <time.h>

/* (60 * 60 * 24), is the number of seconds in one day */
#define SECS_TO_DAYS(T) printf("\n%d day(s) difference", (T / (60 * 60 * 24)))

int main(void)
{
    struct tm t0, t1;

    printf("For Date 1:\n"
           "Enter the month (1-12): ");
    scanf("%d", &t0.tm_mon);
    t0.tm_mon--;

    printf("Enter day (1-30): ");
    scanf("%d", &t0.tm_mday);

    printf("Enter year(1900+): ");
    scanf("%d", &t0.tm_year);
    t0.tm_year -= 1900;

    printf("---------------------------\n");

    printf("For Date 2:\n"
           "Enter the month: (1-12): ");
    scanf("%d", &t1.tm_mon);
    t1.tm_mon--;

    printf("Enter day (1-30): ");
    scanf("%d", &t1.tm_mday);

    printf("Enter year(1900+): ");
    scanf("%d", &t1.tm_year);
    t1.tm_year -= 1900;

    SECS_TO_DAYS((int) difftime(mktime(&t1), (mktime(&t0))));
    printf("\n");
    
    return 0;
    
}