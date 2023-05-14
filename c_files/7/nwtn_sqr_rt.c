//find the square root of a number using Newtons method (how did he even think of this !?)
#include <stdio.h>
#include <math.h>

int main(void) {
    double num, y = 1.0;
    int n;

    printf("Enter positive number to find sqareroot: ");
    scanf("%lf", &num);

     while (fabs(((y + (num / y)) /2) - y) > (0.00001 * y)) {

        y = ((y + (num/ y)) /2);
    }

    printf("Square root = %lf\n", y);
    return 0;
}