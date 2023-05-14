//checks if braces are well nested
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_push(char i);
char stack_pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {

    char ch;

    printf("Enter parantheses and/or braces: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ')' && stack_pop() != '(') {
            printf("Parantheses/braces are not nested properly\n");
            return 0;
        }
        else if (ch == '}' && stack_pop() != '{') {
            printf("Paranthese/braces are not nested properly\n");
            return 0;
        }
        else
        if (ch == '(' || ch == '{')
            stack_push(ch);
    }

    if (!is_empty()) {
        printf("parantheses/braces are not properly nested\n");
        return 0;
    }

    printf("Parantheses/braces are nested properly\n");
    return 0;  
}
void stack_overflow(void) {
    printf("\nStack overflow!");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nStack underflow!");
    exit(EXIT_FAILURE);
}

bool is_full(void) {
    return top == STACK_SIZE;
}

bool is_empty(void) {
    return top == 0;
}

void make_empty(void) {
    top = 0;
}

void stack_push(char c) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char stack_pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}