/*finds the roots of a quadratic equation*/

#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define SUB 0
#define ADD 1

/*quadr: Finds and returns one of the root of
 *       a quadratic equation. The ctrl parameter,
 *       determines if the discriminant, 
 *	 will be added to or subtracted from b.
 */
double quadr(double a, double b,
             double c, bool ctrl);

int main(void)
{
    double a, b, c;
    double x1, x2;

    printf("For the equation: ax^2 + bx + c\n"
           "Enter the values of\n");
    printf("a: ");
    if (scanf("%lf", &a) != 1 || a == 0) {

        printf("Enter a non-zero or numerical value for 'a'\n");
        exit(EXIT_FAILURE);
    }

    printf("b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Enter numrical value for 'b'\n");
        exit(EXIT_FAILURE);
    }

    printf("c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Enter a numerical value for 'c'\n");
        exit(EXIT_FAILURE);
    }

    printf("\nroots of %.2lfx^2 + %.2lfx + %.2lf\n\n", a, b, c);
    printf("x1 = %.2lf\n", quadr(a, b, c, SUB));
    printf("x2 = %.2lf\n", quadr(a, b, c, ADD));

    return 0;
}

double quadr(double a, double b, double c, bool ctrl)
{
	double discrmnt, x;

	discrmnt = pow(b, 2) - (4 * a *c);

	if (discrmnt < 0) {
		printf("complex roots\n");
		exit(EXIT_FAILURE);
	}

	if (ctrl == SUB)
		x = ((-b) - sqrt(discrmnt)) / (2.0 * a);
	else if (ctrl == ADD)
		x =  ((-b) + sqrt(discrmnt)) / (2.0 * a);

	return x;
}
