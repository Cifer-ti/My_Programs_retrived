/* Test serjmp/lonjmp */

#include <setjmp.h>
#include <stdio.h>

jmp_buf env;

void f1(void);
void f2(void);

int main(void) {

    int a;

    if ((a = setjmp(env))== 0)
        printf("setjump returned %d\n", a);
    
    else {
        printf("setjump returned %d\nProgram terminates: longjump called\n", a);
        return 1;
    }

    f1();
    printf("Program terminates normally\n");
    return 0;
}

void f1(void) {

    printf("f1 begins\n");
    f2();
    printf("f1 returns\n");
}

void f2(void) {

    printf("f2 begins\n");
    longjmp(env, 3);
    printf("f2 returns\n");
}