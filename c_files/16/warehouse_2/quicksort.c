#include "quicksort.h"

void quick_sort(struct part a[], int low, int high) {

    int middle;

    if (low >= high)
        return;

    middle = split(a, low, high);
    quick_sort(a, low, middle - 1);
    quick_sort(a, middle + 1, high);
}

int split(struct part a[], int low, int high) {
    struct part part_elment = a[0];

    for (; ;) {
        while (low < high && part_elment.number <= a[high].number)
            high--;
        if (low >= high) break;
        a[low++] = a[high];

        while (low < high && part_elment.number >= a[low].number)
            low++;
      if (low >= high) break;
      a[high--] = a[low];
    }
    a[high] = part_elment;
    return high;
}