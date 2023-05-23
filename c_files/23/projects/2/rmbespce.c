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

		else if ((ch = getchar()) == '\n')
			start_copying = false;
	}

	return 0;
}
