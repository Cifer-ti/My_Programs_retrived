#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *source_fp, *dest_fp;
	int byte, n_write_byte, i;
	char *dest_fp_name;

	if (argc != 2) {
		fprintf(stderr, "Usage %s <compressed-filename.rle>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((source_fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: file %s could not be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	/* creating name for output file */
	dest_fp_name = malloc(sizeof(strlen(argv[1]) - 4));
	if (dest_fp_name == NULL) {
		fprintf(stderr, "Error: uncompressed file could not be created\n");
		exit(EXIT_FAILURE);
	}
	strncpy(dest_fp_name, argv[1], strlen(argv[1]) - 4);
	/* done */

	if ((dest_fp = fopen(dest_fp_name, "wb")) == NULL) {
		fprintf(stderr, "Error: uncompressed file could not be created\n");
		exit(EXIT_FAILURE);
	}

	while ((n_write_byte = getc(source_fp)) != EOF && (byte = getc(source_fp)) != EOF) {
		printf("%d\n", n_write_byte);
		for (i = 0;i < n_write_byte; i++)
			putc(byte, dest_fp);
	}
		
	
	free(dest_fp_name);
	fclose(dest_fp);
	fclose(source_fp);
	exit(EXIT_FAILURE);
}
