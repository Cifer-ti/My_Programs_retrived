/* Computes the value of a digit in a polynomial t*/
#include <stdio.h>

int main(void)
{
    int t, x;

    printf("Enter digit to be computed by polynomial: ");
    scanf("%d", &x);

    t = (3*(x*x*x*x*x)+2*(x*x*x*x)-5*(x*x*x)-(x*x)+(7*x)-6);
    printf("The value of digit when computed in the polynomial is: %d\n", t);

    return 0;
}