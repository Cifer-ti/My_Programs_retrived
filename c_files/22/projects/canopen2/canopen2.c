/*checks if multiple files can be opened*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	
	FILE *fp;
	bool failed_open = false;
	int i;

	if (argc == 1) {
		fprintf(stderr, "argument(s) required\n");
		exit(EXIT_FAILURE);
	}

	for (i = 1; i < argc; i++) {
		
		if ((fp = fopen(argv[i], "rb")) == NULL) {
			fprintf(stderr, "%s can't be opened\n", argv[i]);
			failed_open == true;
		}
		else {
			fprintf(stderr, "%s can be opened\n", argv[i]);
			fclose(fp);
		}
	}

	if (failed_open)
		exit(EXIT_FAILURE);

	exit(EXIT_FAILURE);
}
