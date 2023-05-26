/* Tests the atexit function */

#include <stdio.h>
#include <stdlib.h>

void func0(void);
void func1(void);

int main(void)
{
    atexit(func1);
    atexit(func0);

    return 0;
}

void func0(void)
{
    printf("That's all, ");
}

void func1(void)
{
    printf("folks!\n");
}