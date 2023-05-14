//sorts numbers
#include <stdio.h>

#define N 10

void selection_sort(int n, int a[]);

int main (void) {
    int a[N], i;

    printf("Enter %d numbers to sort: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(N, a);

    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    return 0;
}

/*
* selectoin_sort: sorts the elements of the array by finding the the highest 
* element in the array, and placing it in the last position then call it's self
* to sort the array for a lenght of n - 1
*/
void selection_sort(int n, int a[]) {
    int great, i, position, last;

    if (n <= 0)
        return;
    
     great = a[0];

   for (i = 0; i < n; i++) {
        if (a[i] >= great) {
            great = a[i];
            position = i;
        }
    }

    last = a[n - 1];
    a[n - 1] = great;
    a[position] = last;

    selection_sort(n - 1, a);
    
}