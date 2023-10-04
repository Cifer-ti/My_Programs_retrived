/* Reads a series of words seperated by single spaces, and 
   prints them in reverse order to stdout */
#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main(void)
{
    char s[MAX_LEN];
    char *p[MAX_LEN];
    int i = 0;

    printf("Enter series of words seperated by a single space: ");
    fgets(s, MAX_LEN, stdin);
    s[strlen(s) - 1] = '\0';

    if((p[i] = strtok(s, " ")) == NULL)
        return 0;
    
    i++;
    while((p[i] = strtok(NULL, " ")) != NULL)
        i++;
    
    for(i--; i >= 0; i--)
        printf("%s ", p[i]);
    
    printf("\n");
    return 0;
}