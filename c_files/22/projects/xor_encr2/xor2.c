/*encrypts the content of file*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define key '&'

int main(int argc, char *argv[]) {

	FILE *source_file, *dest_file;
	int old_char, new_char;

	if (argc != 3) {
		fprintf(stderr, "usage: %s <source file> <destinatioln file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((source_file = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((dest_file = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Error: can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((old_char = getc(source_file)) != EOF) {

		new_char = old_char ^ key; /*xors the chararctrs of the old file with the key*/
		putc(new_char, dest_file);
	}

	fclose(source_file);
	fclose(dest_file);

	return 0;
}
