#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int item;
typedef struct queue_type *queue;

queue insert(queue q, item i);
item remove(queue q);
item peek_head(queue q);
item peek_last(queue q);
bool is_emmpty(queue q);

#endif