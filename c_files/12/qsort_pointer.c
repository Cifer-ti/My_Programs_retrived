//implement the quicksort using pointers
#include <stdio.h>

#define N 10

void quick_sort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) {
    int a[N], i;

    printf("Enter %d Numbers to be sorted: ", N);
    for (i = 0; i < N - 1; i++)
        scanf("%d", &a[i]);
    
    quick_sort(a, a, a + (N - 1));
    printf("sorted in ascending order: ");
    for (i = 0; i < N; i++) {
        printf(" %d ", a[i]);
    }

    printf("\n");
    return 0;
}

void quick_sort(int a[], int *low, int *high) {
    int *middle;
    
    if (low >= high) return;
    middle = split(a, low, high);
    quick_sort(a, low, middle - 1);
    quick_sort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high) {
    int part_element = *low;

    for (; ;) {
        while (low < high && part_element <= *high)
           high--;
        
        if (low >= high) break;
        *low++ = *high;

        while (low < high && part_element >= *low)
           low++;
        
        if (low >= high) break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}