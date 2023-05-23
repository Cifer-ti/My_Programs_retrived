/*sorts the numbers in file and prints the largest, smallest and median*/

#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b);

#define MAX_NUM 10000

int main(int argc, char *argv[]) {

	FILE *fp;
	int len = 0, median, num[MAX_NUM];

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (!feof(fp) && len < MAX_NUM)
		fscanf(fp, " %d", &num[len++]);
	len--;

	qsort(num, len, sizeof(int), compare);

	if (len % 2 == 0)
		median = (num[(len / 2) - 1] + num[len / 2]) / 2;
	else
		median = num[(len - 1) / 2];
	
	printf("Maximum: %d\nMinimum: %d\nMedian: %d\n", num[len - 1], num[0], median);

	fclose(fp);
	return 0;
}

int compare(const void *a, const void *b) {

	return *((int *) a) - *((int *) b);
}
