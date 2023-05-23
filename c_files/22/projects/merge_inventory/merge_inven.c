#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

int main(int argc, char *argv[]) {

	FILE *fpin1, *fpin2, *fpout;
	struct part part1, part2;
	int check1, check2;

	if (argc != 3) {
		fprintf(stderr, "usage: %s <input file1> <input file2> <output file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fpin1 = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Error: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	if ((fpin2 = fopen(argv[2], "rb")) == NULL) {
		fprintf(stderr, "Error: can't open %s file\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if ((fpout = fopen(argv[3], "wb")) == NULL) {
		fprintf(stderr, "Error: can't open %s file\n", argv[3]);
		exit(EXIT_FAILURE);
	}

	check1 = fread(&part1, sizeof(struct part), 1, fpin1);
	check2 = fread(&part2, sizeof(struct part), 1, fpin2);

	while (check1 == 1 && check2 == 1) {

		if (part1.number < part2.number) {
			fwrite(&part1, sizeof(struct part), 1, fpout);
			check1 = fread(&part1, sizeof(struct part), 1, fpin1);
		}

		else if (part1.number < part2.number) {
			fwrite(&part1, sizeof(struct part), 1, fpout);
			check1 = fread(&part1, sizeof(struct part), 1, fpin1);
		}

		else if (part1.number < part2.number) {
			fwrite(&part1, sizeof(struct part), 1, fpout);
			check1 = fread(&part1, sizeof(struct part), 1, fpin1);
		}

		else {
			if (strcmp(part1.name, part2.name) != 0)
				fprintf(stderr, "Error: conflicting names with part %d using %s name", part2.number, part2.name);

			part2.on_hand += part1.on_hand;
			fwrite(&part2, sizeof(struct part), 1, fpout);
			check1 = fread(&part1, sizeof(struct part), 1, fpin1);
			check2 = fread(&part2, sizeof(struct part), 1, fpin2);
		}
	}

	while (check1 == 1)
		{
			fwrite(&part1, sizeof(struct part), 1, fpout);
			check1 = fread(&part1, sizeof(struct part), 1, fpin1);
		}

	while (check2 == 1)
	{
		fwrite(&part2, sizeof(struct part), 1, fpout);
		check2 = fread(&part2, sizeof(struct part), 1, fpin2);
	}

	fclose(fpin1);
	fclose(fpin2);
	fclose(fpout);

	return 0;
}
