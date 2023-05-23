/* implements the run-length-encoding algorithm to compress a file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    char *dest_fp_name;
    int occurence = 1, read_byte, byte;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
	exit(EXIT_FAILURE);
    }

    if ((source_fp = fopen(argv[1], "rb")) == NULL) {
	    fprintf(stderr, "Error: file %s could not be opened\n", argv[1]);
	    exit(EXIT_FAILURE);
    }

    /*creating the name of the output file with .rle extension */
    /* 5 cause the length of the extension .rle plus \0 is 5 */
    dest_fp_name = malloc(sizeof(strlen(argv[1]) + 5));
    if (dest_fp_name == NULL) {
	    fprintf(stderr, "Error compressed file could not be saved NN\n");
	    exit(EXIT_FAILURE);
    }
    strncpy(dest_fp_name, argv[1], strlen(argv[1]));
    strcat(dest_fp_name, ".rle");
    /* done */

    if ((dest_fp = fopen(dest_fp_name, "wb")) == NULL) {
	    fprintf(stderr, "Error: compressed file could not be saved MM\n");
	    exit(EXIT_FAILURE);
    }

    byte = getc(source_fp);
    read_byte = byte;

    while ((byte = getc(source_fp)) != EOF) {
	    if (byte == read_byte) {
		    occurence++;
		    read_byte = byte;
	    }
	    else {
		    fprintf(dest_fp, "%d", occurence);
		    putc(read_byte, dest_fp);
		    occurence = 1;
	    }
	    read_byte = byte;
    }

    free(dest_fp_name);
    fclose(source_fp);
    fclose(dest_fp);
    exit(EXIT_SUCCESS);
}
	    
