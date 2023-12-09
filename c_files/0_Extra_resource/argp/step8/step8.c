/* An argp-enabled program, that accepts hidden options */
#include <argp.h>
#include <stdio.h>
#include <stdlib.h>

static int parse_opt(int key, char *arg, struct argp_state *state)
{
    int *arg_count = state->input;
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
        
        case 777:
            parse_opt('d', "3", state);
        
        case 888:
            printf("-");
            break;
        
        case ARGP_KEY_ARG:
            argp_failure(state, 1, 0, "too many arguements");
            break;
        
        case ARGP_KEY_END:
            printf("\n");
            break;
    }

    return 0;
}

int main(int argc, char **argv)
{
    struct argp_option options[] =
    {
        {"dot", 'd', "NUM", OPTION_ARG_OPTIONAL, "show some dots on the screen"},
        {"ellipsis", 888, 0, OPTION_HIDDEN, "show ellipsis on the screen"},
        {"dash", 888, 0, 0, "show a dash on the screen"},
        {0}
    };

    struct argp argp = {options, parse_opt};

    return argp_parse(&argp, argc, argv, 0, 0, 0);
}