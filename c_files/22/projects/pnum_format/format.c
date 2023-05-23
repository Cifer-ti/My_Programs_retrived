/*outputs the number in correct format*/
#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

int main(int argc, char *argv[]) {

    FILE *fp;
    int len_stored, i;
    char intput[300];

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr,"Error: can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while ((len_stored = readline(intput, 300, fp)) != 0) {
        putchar('(');
        for (i = 0; i < len_stored; i++) {
        
            if (i == 3)
                printf(") ");
            else if (i == 6)
                putchar('-');

            printf("%c", intput[i]);
        }
        printf("\n");
    }

    fclose(fp);
    return 0;
}