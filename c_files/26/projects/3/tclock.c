/* Tests the clock function */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

int compare(const void *p, const void *q);

int main(void)
{
    clock_t qsort_start_time, start_time = clock();
    int array[N];

    for (int i = 0; i < N; i++) {
        array[i] = N - i;
        printf("%d ", array[i]);
    }
    
    qsort_start_time = clock();
    qsort(array, N, sizeof(int), compare);

    printf("\n\nqsort time used: %g sec(s)\n",
           (clock() - qsort_start_time) / (double) CLOCKS_PER_SEC);

    printf("\n\nProcessor time used: %g sec(s)\n",
            (clock()- start_time) / (double) CLOCKS_PER_SEC);
    return 0;
}

int compare(const void *p, const void *q)
{
    return (int *) p - (int *) q;
}