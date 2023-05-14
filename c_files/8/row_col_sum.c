//sums the rows and columns of a matrix
#include <stdio.h>

int main(void) {
    int n, i, j, sum; 

    printf("what's the lenght of row and col: ");
    scanf("%d", &n);

    int a[n][n];
    int row_sum[n], col_sum[n];

    for (i = 0; i < n; i++){
        sum = 0;
        printf("Enter row %d= ", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
         row_sum[i] = sum;
    }

    printf("row sum: ");
    for (i = 0; i < n; i++)
        printf("%d ", row_sum[i]);
  
    printf("\n");
    printf("column sum: ");
    for (j = 0; j < n; j++) {
        sum = 0;
        for (i = 0; i < n; i++)
            sum += a[i][j];
        col_sum[i] = sum;
        printf("%d ", sum);
    }
    
    printf("\n");
    return 0;
}
