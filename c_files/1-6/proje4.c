/* Adds tax 5% tax*/

#include <stdio.h>
#define per (5.0/100.0)

int main(void)
{
   float amount, fportion, taxed_amnt;

   printf("Enter a dollar and cents amount: ");
   scanf("%f", &amount);

   fportion = ((amount * per));
   taxed_amnt = ((amount + fportion));
   
   printf("With tax added: $%.2f\n", taxed_amnt);
   
   return 0;

}