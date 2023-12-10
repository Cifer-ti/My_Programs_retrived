/* A program with a --version option and a bug address */
#include <argp.h>
#include <argz.h>
#include <stdio.h>
#include <stdlib.h>

const char *argp_program_bug_address = "anyone@example.com";
const char *argp_program_version = "version 1.0";

struct arguements {
    char *argz;
    size_t argz_len;
};

static int parse_opt(int key, char *arg, struct argp_state *state)
{
    struct arguements *a = state->input;
    switch(key) {
        case 'd':
            unsigned int i;
            unsigned int dots = 1;
            if(arg != NULL)
                dots = atoi(arg);
            for(i = 0; i < dots; i++)
                printf(".");
            printf("\n");
            break;
        
        case 888:
            printf("-");
            break;
        
        case ARGP_KEY_ARG:
            argz_add(&a->argz, &a->argz_len, arg);
            break;
        
        case ARGP_KEY_INIT:
            a->argz = 0;
            a->argz_len = 0;
            break;
        
        case ARGP_KEY_END:
            size_t count = argz_count(a->argz, a->argz_len);
            if(count > 2)
                argp_failure(state, 1, 0, "too many arguements");
            else if(count < 1)
                argp_failure(state, 1, 0, "too few arguements");
            break;
    }
    return 0;
}


int main(int argc, char **argv)
{
    struct argp_option options[] =
    {
        {"dot", 'd', "NUM", OPTION_ARG_OPTIONAL, "show some dots on the screen"},
        {"dash", 888, 0, 0, "show a dash on the screen"},
        {0}
    };

    struct argp argp = {options, parse_opt, "WORD\nWORD WORD",
        "Show some dots and dashes on the screen.\v"
        "A final newline is also shown regardless of wether any options were given."};

    struct arguements arguements;

    if(argp_parse(&argp, argc, argv, 0, 0, &arguements) == 0) {
        const char *prev = NULL;
        char *word;
        while(word = argz_next(arguements.argz, arguements.argz_len, prev)) {
            printf(" %s", word);
            prev = word;
        }
        printf("\n");
        free(arguements.argz);
    }

    return 0;
}

