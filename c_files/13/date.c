//prints a date entered
#include <stdio.h>

int main(void) {
    const char *month[12] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November",
                             "December"};
    int mon, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mon, &day, &year);

    while ((mon > 12 || mon <= 0) || (day > 31 || day <= 0)) {
        printf("invalide date!\n");
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mon, &day, &year);
    }
    printf("you entered the date %s %d, %d", month[mon - 1], day, year);

    printf("\n");
    return 0;
}
