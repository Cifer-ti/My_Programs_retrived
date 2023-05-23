/*formats an inputed date*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int day, month, year;
	const char *months[] = {"January", "Febuary", "March", "April",
			  "May", "June", "July", "August", "September",
			  "Ocotber", "November", "December"};

	if (argc != 2) {
		fprintf(stderr, "Usage: %s date.\
			date format: (mm/dd/yyyy) or (mm-dd-yyyy)\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((sscanf(argv[1], "%d/%d/%d", &month, &day, &year)) == 3) {
		if (month < 0 || month > 12) {
			printf("invalid month\n");
			exit(EXIT_FAILURE);
		}
		printf("%s %d, %d", months[month - 1], day, year);
	}
	else
	if ((sscanf(argv[1], "%d-%d-%d", &month, &day, &year)) == 3) {
		if (month < 0 || month > 12) {
			printf("invalid month\n");
			exit(EXIT_FAILURE);
		}

		printf("%s %d, %d", months[month - 1], day, year);
	}
		
	else {
		printf("Wrong format\
			\nformat: (mm/dd/yyyy) or (mm-dd-yyyy)\n");
		exit(EXIT_FAILURE);
	}

	printf("\n");
	return 0;
}
