//performs operations on fractoins by just inserting the operation sign betweening the fractions
#include <stdio.h>

int main(void){
    float numerator_1, numerator_2, denom_1, denom_2, ans;
    char opr;

    printf("To perform operations just enter the operation sign between fractions\n");
    printf("('+', '-', '*', '/')");
    printf("Enter fraction in this format (numerator/denominator)\n\n");

    printf("Equation: ");
    scanf("%f/%f %c %f/%f", &numerator_1, &denom_1, &opr, &numerator_2, &denom_2);

    switch (opr) {
      case '+':
         ans = ((numerator_1*denom_2) + (numerator_2 * denom_1)) / (denom_1 * denom_2);
         break;
        
      case '-':
         ans = ((numerator_1*denom_2) - (numerator_2 * denom_1)) / (denom_1 * denom_2);
         break;

      case '*':
         ans = (numerator_1 * numerator_2) / (denom_1 * denom_2);
         break;

      case '/':
         ans = (numerator_1 * denom_2) / (numerator_2 * denom_1);
    }

    printf("Answer = %.2f\n", ans);
    return 0;
}