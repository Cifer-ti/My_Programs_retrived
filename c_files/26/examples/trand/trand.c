/* Tests the pseudo-random sequence generation function */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, seed;

	printf("This program displaus the first five values of "
		"rand.\n");

	for (; ;) {

		for (i = 0; i < 5; i++)
			printf("%d ", rand());

		printf("\n\n");

		printf("Enter new seed value (o to terminate): ");
		scanf("%d", &seed);

		if (seed == 0)
			break;
		srand(seed);
	}
	return 0;
}
