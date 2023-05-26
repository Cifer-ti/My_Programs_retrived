/* Test the strftime */

#include <stdio.h>
#include <time.h>

int main(void)
{
    char str[40];
    time_t current = time(NULL);
    struct tm *p;

    p = localtime(&current);
    strftime(str, sizeof(str), "%A, %B, %d, %Y, %I:%M", p);

    printf("%s%c\n", str, p->tm_hour >= 11 ? 'p' : 'a');
    return 0;
}