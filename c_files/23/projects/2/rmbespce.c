/* Copies a file from stdin to stdout removing all white-space charaters
   at the begining of the line
*/
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) 
{
	int ch;
	bool start_copying = false;

	while ((ch = getchar()) != EOF) {

		if (start_copying == true)
			putchar(ch);

		else if (!isspace(ch)) {
			start_copying = true;
			putchar(ch);
		}

		else if (ch == '\n')
			start_copying = false;
	}

	return 0;
}
