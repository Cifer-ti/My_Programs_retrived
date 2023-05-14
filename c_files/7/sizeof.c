//prints the sizeof() value of the different integer and floating types
#include <stdio.h>

int main(void){
     
     printf("press Enter to print sizeof(type).....");
     getchar();

    printf("\nsizeof(int) sizeof(short) sizeof(long) sizeof(float) sizeof(double) sizeof(long double)\n");
    printf("%5lu %12lu %14lu %13zu %13zu %15zu", sizeof(int), sizeof(short), sizeof(long), 
                                                 sizeof(float), sizeof(double), sizeof(long double));

    printf("\n");
    return 0;
}