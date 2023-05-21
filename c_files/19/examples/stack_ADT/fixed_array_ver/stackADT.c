//implentation of the stackADT module
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define STACK_SIZE 100 //maximum elements stack can hold

struct stack_type {
    item contents[STACK_SIZE];
    int top;
};

static void terminate(char *message) {
    printf("%s/n", message);
    exit(EXIT_FAILURE);
}
Stack create(void) {
    
    Stack s = malloc(sizeof(struct stack_type));
    
    if (s == NULL)
        terminate("Error in create: stack could not be created");
    
    s->top = 0;
    return s;
}

void destroy(Stack s) {
    free(s);
}

void make_empty(Stack s) {
    s->top = 0;
}

bool is_empty(Stack s) {
    return s->top == 0;
}

bool is_full(Stack s) {
    return s->top == STACK_SIZE;
}

void push(Stack s, item i) {
    
    if (is_full(s))
        terminate("Error in push: Stack is full");
    s->contents[s->top++] = i;
}

item pop(Stack s) {
    
    if (is_empty(s))
        terminate("Error in pop: Stack is empty");
    return s->contents[--s->top];
}