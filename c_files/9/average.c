//computes the pairwise ab=verage of three numbers
#include <stdio.h>

double average(double a, double b) {
    return (a + b) / 2;
}

int main(void) {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    printf("Average of %.2lf and %.2lf: %.2lf\n", num1, num2, average(num1, num2));
    printf("Average of %.2lf and %.2lf: %.2lf\n", num1, num3, average(num1, num3));
    printf("Average of %.2lf and %.2lf: %.2lf\n", num3, num2, average(num3, num2));

    return (0);
}