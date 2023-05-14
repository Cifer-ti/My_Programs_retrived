/*Calculates a broker's commisson*/

#include <stdio.h>

int main(void)
{
   float commission, value;

//calculates the commision based on the value of what broker sells
   for(;;)
   {
    printf("Enter transaction value: ");
   scanf("%f", &value);
    if (value == 0)
   {
    return 0;
   }
  if ( value < 2500.00) 
  commission = 30.00 + (0.017 * value);
  else
    if (value < 6250.00)
    commission = 56.00 + (0.0066 * value);
  else
    if (value < 20000.00)
    commission = 76.00f + (0.0034f * value);
  else
    if (value < 50000.00 )
    commission = 100.00f + (0.0022f * value);
  else
    if (value < 500000.00)
    commission = 155.00f + (0.0011f * value);
  else
    commission = 255.00f + (0.0009f * value);  
  
 printf ("commission is: %.2f cfa\n", commission);
  
   
   }
  
   
   return 0;
} 
