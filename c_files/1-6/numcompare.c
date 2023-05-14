//determines the greatest number from a series of numbers entered
//stops collecting numbers when a number <= 0
#include <stdio.h>

int main(void)
{
    
    float num, gr; //num == number, gr == greatest number
     
    printf("Enter a number (0 to terminate): ");
    scanf("%f", &num);

     gr = num;
     //consider the first number entered to be the greatest
       
       for( ; num > 0; )
      {
        printf("Enter a number (0 to terminate): ");
        scanf("%f", &num);
        if (num > gr)           //compare the first number entered to the next entered
         {                      //and if finds a number greater than the first entered, that number
            gr = num;          //becomes the new greatest and keeps comparing until a numer <= 0 
         }                     //is entered, then exits loop and prints the graetest number.
      }
         printf("the largest number is: %.2f", gr);
 
    return 0;
}
