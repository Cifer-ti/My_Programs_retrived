//module interface
#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef int item;
typedef struct stack_type *Stack;

Stack create(int size);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, item i);
item pop(Stack s);

#endif