//prints a magic box of size nxn
#include <stdio.h>

int main(void) {
    int count, x, y , x_last, y_last, n;

    printf("Enter the size of magic square (odd number betwwen 1 and 99): ");
    scanf("%d", &n);

    int square[n][n];

    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            square[y][x] = 0;
        }
    }

    x = n /2;
    y = 0;
    square[x][y] = 1;
    
    count = 2;
    while (count <= n * n) {
        x_last = x;
        y_last = y;

        if (x_last + 1 >= n)
            x = 0;
        else 
            x = x_last + 1;
        if (y_last - 1 < 0)
            y = n - 1;
        else
            y = y_last -1;

        if (square[x][y] == 0) 
            square[x][y] = count++;
        else {
            if (y_last + 1 >= n)
                square[x = x_last][y = 0] = count++;
            else
                square[x = x_last][y = y_last + 1] = count++;
        }
    }

    for (y = 0; y < n; y++) {
        for (x = 0; x < n; x++) {
            printf("%3d", square[x][y]);
        }
        printf("\n");
    }
    return 0;
 
}