/*converts a unix text file to windows text file*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	FILE *fpin, *fpout;
	int ch;

	if (argc != 3) {

		fprintf(stderr, "Usage: %s <input windows file> <output unix file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fpin = fopen(argv[1], "r")) == NULL) {

		fprintf(stderr, "Error: Can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fpout = fopen(argv[2], "w")) == NULL) {

		fprintf(stderr, "Error: Can't open %s file\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fpin)) != EOF) {

		if (ch == '\x0a')
			fputc('\x0d', fpout);
		else
			fputc(ch, fpout);
	}

	fclose(fpin);
	fclose(fpout);
	return 0;
}
