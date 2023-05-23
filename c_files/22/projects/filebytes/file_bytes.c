/*displays the content of a file in bytes*/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	FILE *fp;
	unsigned char a[10]; //The characters of the file are read into this array
	unsigned long long int char_read, offset = 0;
	int i;

	if (argc != 2) {
		fprintf(stderr, "usage: %s <filename>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Offset              Bytes              Characters\n");
	printf("------  -----------------------------  ----------\n");

	while ((char_read = fread(a, sizeof(unsigned char), 10, fp)) > 0)
	{
		printf("%6lld  ", offset);

		for (i = 0; i < 10 ; i++) {
			
			if (i >= char_read)
				printf("   ");
			else
				printf("%-3.2X", a[i]);
		}
		
		printf(" ");

		for(i = 0 ; i < char_read; i++)
			printf("%c", isprint(a[i]) ? a[i] : '.');

		offset += 10;
		printf("\n");
	}

	fclose(fp);
	return 0;
}
