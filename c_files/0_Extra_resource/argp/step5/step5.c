/* An argp-enabled program, with an aliased long option */
#include <argp.h>
#include <stdio.h>
#include <stdlib.h>

static int parse_opt(int key, char *arg, struct argp_state *state)
{
    switch(key) {
        case 'd':
            unsigned int i;
            unsigned int dots = 1;

            if(arg == NULL)
                dots = 1;
            else
                dots = atoi(arg);
            
            for(i = 0; i < dots; i++)
                printf(".");
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
        {"period", 0, "NOT IMPORTANT", OPTION_ALIAS, "NOT IMPORTANT"},
        {0}
    };

    struct argp argp = {options, parse_opt, 0, 0};

    return argp_parse(&argp, argc, argv, 0, 0, 0);
}