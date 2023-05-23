#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

typedef int date;

int main(int argc, char *argv[]) {

	FILE *fp;
	float price;
	int item;
	date day, month, year;
	char input[300];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Error %s file can't be opend\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Item\t\t\tUnit\t\t\tPurchase\
	           \n\t\t\tPrice\t\t\tDate\n");
	while (readline(input, 300, fp) != 0) {
		sscanf(input, "%d,%f,%d/%d/%d", &item, &price, &month, &day, &year);
		printf("%d\t\t\t$%.1f\t\t\t%d/%d/%d\n", item, price, month, day, year);
	}

	fclose(fp);
	return 0;
}