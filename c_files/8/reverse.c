//reverses a series of N numbers entered
#include <stdio.h>

int main(void){
    int N;

    printf("This program reverses a series of numbers\n\n");

    printf("How many numbers do you want to reverse: ");
    scanf("%d", &N);

    int i, a[N];
    
    printf("\nEnter numbers to be reversed: ");
    
    //reads numbers entered
    for (i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }

//displays the numbers in a reversed order
    printf("In reversed order: ");
    for (i = N -1; i >= 0; i--){
        printf("%2d", a[i]);
    }
    printf("\n");

    return 0;
}