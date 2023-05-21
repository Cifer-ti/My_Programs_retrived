#include <stdio.h>
#include <stdlib.h>
#include "stackADT3.h"

struct node {
    void *data;
    struct node *next;
};

struct stack_type {
    struct node *top;
    int len;
};

static void terminate(char *message) {

    printf("%s.\n", message);
    exit(EXIT_FAILURE);
}

stack create(void) {

    stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error in create: Stack could not be created");

    s->len = 0;
    s->top = NULL;

    return s;
}

bool is_empty(stack s) {
    return s->top == NULL;
}

bool is_full(stack s) {
    return false;
}

void push(stack s, void *i) {

    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in push: stack is full");
    
    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
    s->len++;
}

void *pop(stack s) {

    struct node *old_top;
    void *i;

    if (is_empty(s))
        terminate("Error in pull; stack is empty");

    old_top = s->top;
    i = old_top->data;
    s->len--;
    s->top = old_top->next;
    free(old_top);
    
    return i;
}

void make_empty(stack s) {

    while (!is_empty(s))
        pop(s);
}

void destroy(stack s) {

    make_empty(s);
    free(s);
}

int length(stack s) {
    return s->len;
}