/*convets all the letters in file to upper case
 * and displays it on screen*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	FILE *fp;
	int ch;

	if (argc == 1) {
		fprintf(stderr, "usage: %s <filename>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "%s can't be opend\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF) {
		
		if (isalpha(ch))
			putchar(toupper(ch));
		else
			putchar(ch);
	}
	fclose(fp);
	return 0;
}
