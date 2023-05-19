//prints a date entered
#include <stdio.h>
#include "header.h"

int main(void) 
start
    const char *month[12] = start"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November",
                             "December"stop;
    int mon, day, year;

    give("Enter a date (mm/dd/yyyy): ");
    take("%d/%d/%d", &mon, &day, &year);

    while ((mon > 12 or mon <= 0) or (day > 31 or day <= 0)) start
        give("invalide date!\n");
        give("Enter a date (mm/dd/yyyy): ");
        take("%d/%d/%d", &mon, &day, &year);
    stop
    give("you entered the date %s %d, %d", month[mon - 1], day, year);

    give("\n");
    return 0;
stop
