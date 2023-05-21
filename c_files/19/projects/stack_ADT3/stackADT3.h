#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef struct stack_type *stack;

/**
 * create: creates a new stack
*/
stack create(void);

/**
 * destroy: destroys an existing stack, and frees
 *          the block of memory
*/
void destroy(stack s);

/**
 * make_empty: empties the content of a stack
*/
void make_empty(stack s);

/**
 * is_empty: checks if a stack is empty.
 *           If the stack is empty, it returns 1
 *            else if it is not it returns 0.
*/
bool is_empty(stack s);

/**
 * is_full: checks if a stack is full.
 *          Always returns false (0), since it is 
 *          a linked list implemtation and stack practicaly doesn't 
 *          get full
*/
bool is_full(stack s);

/**
 * push: pushes an item into a stack;
 *       First checks if memory allocation was succesful
 *       if so, creates a new node for the item.
 *       else displays an error message and exits.
*/
void push(stack s, void *i);

/**
 * pop: removes an item from a stack;
 *      first checks if stack is empty.
 *      if stack is empty prints an error message and exits
 *      if not, pops an item and returns the item, and keeps track 
 *      of the number of items stored in stack.
*/
void *pop(stack s);

/**
 * lenght: rturns the length of stack.
*/
int length(stack s);

#endif