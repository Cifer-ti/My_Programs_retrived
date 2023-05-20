#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "inventory.h"

void quick_sort(struct part a[], int low, int high);
int split(struct part a[], int low, int high);

#endif