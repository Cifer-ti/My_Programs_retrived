//determines the earliest between 2 dates
#include  <stdio.h>

int main(void) {
    int day1, day2, month1, month2, year1, year2;
  
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if ((year1 - year2) > 0)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
    else if ((year1 - year2) < 0)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);

       else if ((month1 - month2) > 0)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
       else if ((month1 - month2) < 0)
          printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);

          else if ((day1 - day2) > 0)
             printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
          else if ((day1 - day2) < 0)
             printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
          else if ((day1 - day2) == 0)
             printf("%d/%d/%.2d is same as %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
            
    printf("\n");
    return 0;
}
//can't determine if date entered is invalid