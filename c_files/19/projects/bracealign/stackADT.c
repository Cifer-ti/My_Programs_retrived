//module implementation file
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node {
    char ch;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

static void terminate(char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

stack create(void) {

    stack s = malloc(sizeof (struct stack_type));
    if (s == NULL)
        terminate("Error in create: stack could not be ");
    
    s->top = NULL;
    return s;
}

bool is_empty(stack s) {
    return s->top == NULL;
}

bool is_full(stack s) {
    return false;  //c99
}

void push(stack s, char brace) {

    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in push: Stack is full");
    
    new_node->ch = brace;
    new_node->next = s->top;
    s->top = new_node;
}

char pop(stack s) {

    struct node *old_top;
    char brace;

    if (is_empty(s))
        terminate("Error in pop: Stack is empty.");
    
    old_top = s->top;
    brace = old_top->ch;
    s->top = old_top->next;
    free(old_top);
    return brace;
}

void make_empty(stack s) {

    while (!is_empty(s))
        pop(s);
}

void destroy(stack s) {

    make_empty(s);
    free(s);
}