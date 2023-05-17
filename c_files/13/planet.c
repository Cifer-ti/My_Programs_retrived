//checks planet name
//command line arguement
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {

    char *planet[] = {"Mercury", "Venus", "Earth",
                             "Mars", "Jupiter", "Saturn",
                             "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++) {
            if ((argv[i], planet[j]) == 0) {
                printf("%s is planet %d from the sun\n", argv[i], j + 1);
		        break;
            }
        }

        if (j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
