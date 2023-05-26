/* Tests the mktime function */

#include <stdio.h>
#include <time.h>

int main(void)
{
	struct tm t;
	int pdays;

	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;
	t.tm_isdst = -1;

	printf("Enter the month(1-12): ");
	if (scanf("%d", &t.tm_mon) != 1 || ((t.tm_mon < 1) || (t.tm_mon > 12))) {
		printf("Error: wrong month format\n");
		return 1;
	}
	t.tm_mon--;
	
	/* No input verification for months with less than 31 days */
	printf("Enter the day(1-31)): ");	
	if (scanf("%d", &t.tm_mday) != 1 || ((t.tm_mday < 1) || (t.tm_mday > 31))) {
		printf("Error: wrong date format\n");
		return 1;
	}
	
	printf("Enter the year(1900+)): ");	
	if (scanf("%d", &t.tm_year) != 1 || t.tm_year < 1900) {
		printf("Error: wrong year format\n");
		return 1;
	}
	t.tm_year -= 1900;

	printf("Enter additional days: ");	
	if (scanf("%d", &pdays) != 1) {
		printf("Error: additional days should be number\n");
		return 1;
	}

	mktime(&t);

	printf("New date: %d/%d/%d\n", t.tm_mon + 1, t.tm_mday, t.tm_year + 1900);

    return 0;
}


